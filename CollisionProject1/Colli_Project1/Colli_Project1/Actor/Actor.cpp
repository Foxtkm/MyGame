#include "Actor.h"

void Actor::update()
{
}

void Actor::draw() const
{
	for (int i = 0; i < 2; i++) {
		DrawRotaGraph(position_.x, position_.y, exRate, angle_, texture_[i], TRUE, FALSE);
	}
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
	if (Box_body_.Extrusion(other.Box_body_))return true;
	//if (Seg_body().intersects(other.Seg_body()))return true;
	//if (Circle_body().intersects(other.Circle_body()))return true;
	return false;
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


Box Actor::Box_body() const
{
	return Box_body_.translate(position_);
}

BoundingSegment Actor::Seg_body() const
{
	return Seg_body_.translate(position_);
}

Circle Actor::Circle_body() const
{
	return Circle_body_.translate(position_);
}


