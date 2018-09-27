#include "BoundingRectangle.h"

BoundingRectangle::BoundingRectangle(float left, float top, float right, float bottom)
	:BoundingRectangle{ {left,top},{right,bottom} } {
}

BoundingRectangle::BoundingRectangle(const Vector2 & min, const Vector2 & max)
	: min_{ min }, max_{ max } {
}

bool BoundingRectangle::contains(const Vector2 & position) const
{
	return (min_.x <= position.x && position.x <= max_.x)
		&& (min_.y <= position.y && position.y <= max_.y);
}

//‹éŒ`‚ªd‚È‚Á‚Ä‚¢‚é‚©(other:‘¼‹éŒ`)
bool BoundingRectangle::intersects(const BoundingRectangle & other) const
{
	if (min_.x > other.max_.x)return false;
	if (max_.x < other.min_.x)return false;
	if (min_.y > other.max_.y)return false;
	if (max_.y < other.min_.y)return false;
	return true;
}

BoundingRectangle BoundingRectangle::translate(const Vector2 & position) const
{
	return { min_ + position,max_ + position };
}

float BoundingRectangle::width() const
{
	return max_.x - min_.x;
}

float BoundingRectangle::height() const
{
	return max_.y - min_.y;
}

