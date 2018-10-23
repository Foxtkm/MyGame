#include "BoundingCircle.h"

BoundingCircle::BoundingCircle(const Vector2 & center, float radius):
	center_{ center }, radius_{ radius }

{
}

bool BoundingCircle::intersects(const BoundingCircle & other) const
{
	float x = center_.x - other.center_.x;
	float y = center_.y - other.center_.y;
	float r = radius_ + other.radius_;

	if ((x*x) + (y*y) <= r * r)return true;

	return false;
}

BoundingCircle BoundingCircle::translate(const Vector2 & position) const
{
	return { center_ + position,radius_ };
}

void BoundingCircle::Extrusion(const BoundingCircle & other) const
{
	
	float dis = Vector2::Distance(other.center_, center_);
	std::abs(dis);

	
}
