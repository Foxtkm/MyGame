#ifndef BOUNDING_SEGMENT_H_
#define BOUNDING_SEGMENT_H_

#include"../../Vector/Vector2D/Vector2D.h"

class BoundingSegment {
public:
	BoundingSegment(const Vector2& startPoint, const Vector2& endPoint);

	//“_‚ª‹éŒ`‚Ì’†‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©
	bool contains(const Vector2& position)const;
	bool intersects(const BoundingSegment& other)const;
	BoundingSegment translate(const Vector2& position)const;


private:
	Vector2 Point1{ 0.0f,0.0f };
	Vector2 Point2{ 0.0f,0.0f };
};
#endif // !BOUNDING_SEGMENT_H_
