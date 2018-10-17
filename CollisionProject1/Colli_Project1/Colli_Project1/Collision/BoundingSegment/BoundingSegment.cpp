#include "BoundingSegment.h"

BoundingSegment::BoundingSegment(const Vector2 & startPoint, const Vector2 & endPoint) :
	Point1{ startPoint }, Point2{ endPoint }
{

}

bool BoundingSegment::contains(const Vector2 & position) const
{
	return false;
}

bool BoundingSegment::intersects(const BoundingSegment & other) const
{
	if (Vector2::Cross(Point2 - Point1, other.Point2 - other.Point1) < 0)return false;

	return true;
}
