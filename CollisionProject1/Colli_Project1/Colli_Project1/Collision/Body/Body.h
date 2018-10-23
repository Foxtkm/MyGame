#ifndef BODY_H_
#define BODY_H_

#include"IBody.h"
#include"../../Vector/Vector2D/Vector2D.h"

class BoundingSegment;
class Box;
class Circle;

class Body :public IBody {
public:

	Body() = default;
	virtual ~Body() {}

	virtual std::shared_ptr<Body> translate(const Vector2&pos)const = 0;

};
#endif // !BODY_H_
