#include "Vector2D.h"

// íËêî
const Vector2 Vector2::Up(0.0f, 1.0f);
const Vector2 Vector2::Down(0.0f, -1.0f);
const Vector2 Vector2::Left(-1.0f, 0.0f);
const Vector2 Vector2::Right(1.0f, 0.0f);
const Vector2 Vector2::UnitX(1.0f, 0.0f);
const Vector2 Vector2::UnitY(0.0f, 1.0f);
const Vector2 Vector2::One(1.0f, 1.0f);
const Vector2 Vector2::Zero(0.0f, 0.0f);

Vector2::Vector2(float _x, float _y)
	:x(_x), y(_y)
{
}

float Vector2::Length()const
{
	return std::sqrt(Dot(*this,*this));
}


float Vector2::Dot(const Vector2& vector1, const Vector2& vector2) {
	return vector1.x * vector2.x + vector1.y * vector2.y;
}

float Vector2::Cross(const Vector2& vector1, const Vector2& vector2) 
{
	return vector1.x * vector2.y - vector2.x * vector1.y;
}

float Vector2::Distance(const Vector2& vector1, const Vector2& vector2) {
	return (vector2 - vector1).Length();
}

Vector2 Vector2::Normalize(const Vector2& value) const
{
	return *this / Length();
}

Vector2 Vector2::operator+() const
{
	return Vector2(x, y);
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

