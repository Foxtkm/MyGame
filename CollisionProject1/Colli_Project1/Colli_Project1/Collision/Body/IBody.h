#pragma once

#include"../../Vector/Vector2D/Vector2D.h"
#include"IBodyPtr.h"
#include<vector>

class BoundingSegment;
class Box;
class Circle;

class IBody {
public:

	virtual ~IBody(){}
	virtual bool intersects(IBodyPtr& other) = 0;
	virtual bool intersects(BoundingSegment& other) = 0;
	virtual bool intersects(Box& other) = 0;
	virtual bool intersects(Circle& other) = 0;

	Vector2 position_;

};
