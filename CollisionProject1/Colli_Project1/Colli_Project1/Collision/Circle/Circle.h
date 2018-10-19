#ifndef CIRCLE_H_
#define CIRCLE_H_
#include"../../Vector/Vector2D/Vector2D.h"

class Circle {

public:

	Circle() = default;
	Circle(const Vector2& center, float radius);

	bool intersects(const Circle& other)const;
	Circle translate(const Vector2& position)const;

private:
	Vector2 center_{ 0.0f,0.0f };
	float radius_{ 0.0f };
};
#endif // !CIRCLE_H_

