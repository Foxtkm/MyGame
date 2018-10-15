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
	if ((Point1.x - Point2.x)*(other.Point1.y - Point1.y) + (Point1.y - Point2.y)*(Point1.x - other.Point1.x)*
		(Point1.x - Point2.x)*(other.Point2.y - Point1.y) + (Point1.y - Point2.y)*(Point1.x - other.Point2.x) > 0)return true;
	return false;
}
