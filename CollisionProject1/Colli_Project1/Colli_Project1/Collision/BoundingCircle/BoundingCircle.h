#ifndef BOUNDING_CIRCLE_H_
#define BOUNDING_CIRCLE_H_

#include"../../Vector/Vector2D/Vector2D.h"

class BoundingCircle {
public:

	BoundingCircle() = default;
	BoundingCircle(const Vector2& center, float radius);

	bool intersects(const BoundingCircle& other)const;
	BoundingCircle translate(const Vector2& position)const;

	void Extrusion(const BoundingCircle& other)const;

private:
	Vector2 center_{ 0.0f,0.0f };
	float radius_{ 0.0f };
};
#endif // !BOUNDING_CIRCLE_H_
