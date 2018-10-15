#include "Vector2D.h"

 Vector2::Vector2(float _x, float _y)
	:x(_x), y(_y)
{
}

float Vector2::length()const
{
	return std::sqrt(lengthSquare());
}

 float Vector2::lengthSquare() const {
	return dot(*this);
}

 float Vector2::dot(const Vector2& other)const {
	return x * other.x + y * other.y;
}

float Vector2::distanceFrom(const Vector2& other)const {
	return (other - *this).length();
}

Vector2 Vector2::normalize() const
{
	return *this / length();
}

 bool Vector2::isZero()const {
	return x == 0.0 && y == 0.0;
}

 Vector2 Vector2::operator+() const
{
	return Vector2(x,y);
}

 Vector2 Vector2::operator-() const
{
	return Vector2(-x, -y);
}

 Vector2 Vector2::operator+(const Vector2 & other) const
{
	return Vector2(x + other.x, y + other.y);
}

 Vector2 Vector2::operator-(const Vector2 & other) const
{
	return Vector2(x - other.x, y - other.y);
}

 Vector2 Vector2::operator*(float s) const
{
	return Vector2(x*s, y*s);
}

 Vector2 Vector2::operator/(float s) const
{
	return Vector2(x / s, y / s);
}

Vector2 & Vector2::operator+=(const Vector2 & other)
{
	x += other.x;
	y += other.y;

	return *this;
}

Vector2 & Vector2::operator-=(const Vector2 & other)
{
	x -= other.x;
	y -= other.y;

	return *this;
}

Vector2 & Vector2::operator*=(float s)
{
	x *= s;
	y *= s;
	return *this;
}

Vector2 & Vector2::operator/=(float s)
{
	x /= s;
	y /= s;
	return *this;
}

