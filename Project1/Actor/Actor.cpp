#include "Actor.h"

void Actor::update()
{
}

void Actor::draw() const
{
	DrawRotaGraph(position_.x, position_.y,exRate,angle_,texture_, TRUE,FALSE);
}

void Actor::react(Actor & other)
{
}

void Actor::collide(Actor & other)
{
	if (is_collide(other)) {
		react(other);
		other.react(*this);
	}
}

void Actor::die()
{
	dead_ = true;
}

bool Actor::is_collide(const Actor & other) const
{
	return body().intersects(other.body());
}

bool Actor::is_dead() const
{
	return dead_;
}

const std::string & Actor::name() const
{
	return name_;
}

Vector2 Actor::position() const
{
	return position_;
}

float Actor::rotation() const
{
	return angle_;
}

Vector2 Actor::velocity() const
{
	return velocity_;
}

BoundingRectangle Actor::body() const
{
	return body_.translate(position_);
}
