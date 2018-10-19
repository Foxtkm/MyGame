#include "Circle.h"

Circle::Circle(const Vector2 & center, float radius):
	center_{center},radius_{radius}
{
}

bool Circle::intersects(const Circle & other) const
{
	float x = center_.x - other.center_.x;
	float y = center_.y - other.center_.y;
	float r = radius_ + other.radius_;

	if ((x*x) + (y*y) <= r * r)return true;

	return false;
}

Circle Circle::translate(const Vector2 & position) const
{
	return { center_+position,radius_ };
}
