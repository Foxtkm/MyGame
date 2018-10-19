#include "Box.h"

Box::Box(float left, float top, float right, float bottom) :
	Box{ {left,top},{right,bottom} }
{

}

Box::Box(const Vector2 & min, const Vector2 & max) :
	min_{ min }, max_{ max }
{
}

bool Box::contains(const Vector2 & position) const
{
	return (min_.x <= position.x && position.x <= max_.x)
		&& (min_.y <= position.y && position.y <= max_.y);
}

bool Box::intersects(const Box & other)const
{
	if (min_.x > other.max_.x)return false;
	if (max_.x < other.min_.x)return false;
	if (min_.y > other.max_.y)return false;
	if (max_.y < other.min_.y)return false;
	return true;
}

Box Box::translate(const Vector2 & position) const
{
	return { min_ + position,max_ + position };
}

bool Box::Extrusion(const Box & other) const
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

	bool flag1 = false;
	bool flag2 = false;
	bool flag3 = false;
	bool flag4 = false;

	for (int p = 0; p < 4; p++) {
		Line[p] = Point[(p + 1) % 4] - Point[p];
		for (int o = 0; o < 4; o++) {
			Vector2 v[4];
			v[o] = other_Point[(o + 1) % 4] - Point[o];

			if (Vector2::Cross(Line[p], v[o])<=0)return true;
		}
	}

	return false;



}
