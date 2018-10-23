#include "BoundingBox.h"

BoundingBox::BoundingBox(float left, float top, float right, float bottom):
	BoundingBox{ {left,top},{right,bottom} }

{
}

BoundingBox::BoundingBox(const Vector2 & min, const Vector2 & max):
	min_{ min }, max_{ max }

{
}

bool BoundingBox::contains(const Vector2 & position) const
{
	return (min_.x <= position.x && position.x <= max_.x)
		&& (min_.y <= position.y && position.y <= max_.y);
}

bool BoundingBox::intersects(const BoundingBox & other) const
{
	if (min_.x > other.max_.x)return false;
	if (max_.x < other.min_.x)return false;
	if (min_.y > other.max_.y)return false;
	if (max_.y < other.min_.y)return false;
	return true;
}

BoundingBox BoundingBox::translate(const Vector2 & position) const
{
	return { min_ + position,max_ + position };
}

bool BoundingBox::Extrusion(const BoundingBox & other) const
{

	Vector2 Point[4];

	//左上
	Point[0] = Vector2{ min_.x,min_.y };
	//右上
	Point[1] = Vector2{ max_.x,min_.y };
	//右下
	Point[2] = Vector2{ max_.x,max_.y };
	//左下
	Point[3] = Vector2{ min_.x,max_.y };

	Vector2 other_Point[4];

	//左上
	other_Point[0] = Vector2{ other.min_.x,other.min_.y };
	//右上
	other_Point[1] = Vector2{ other.max_.x,other.min_.y };
	//右下
	other_Point[2] = Vector2{ other.max_.x,other.max_.y };
	//左下
	other_Point[3] = Vector2{ other.min_.x,other.max_.y };

	//判定用ベクトル
	Vector2 Line[4];
	Vector2 othLine[4];
	////上側
	//Line[0] = Point[1] - Point[0];
	////右側
	//Line[1] = Point[2] - Point[1];
	////下側
	//Line[2] = Point[3] - Point[2];
	////左側
	//Line[3] = Point[0] - Point[3];



	for (int p = 0; p < 4; p++) {
		bool flag{ true };
		for (int o = 0; o < 4; o++) {
			Vector2 var = Point[(p + 1) % 4] - Point[o];
			Vector2 v = other_Point[p] - Point[o];

			if (Vector2::Cross(var, v) > 0) { flag = false; };
		}
		if (flag)return true;
	}

	return false;

}
