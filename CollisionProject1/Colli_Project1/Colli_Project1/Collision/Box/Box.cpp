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
