#include "Enemy.h"

Enemy::Enemy(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Enemy";
	Seg_body_ = BoundingSegment{ Vector2{0,0},Vector2{256.0f,256.0f} };
	position_ = position;
	Cr = GetColor(255, 255, 255);
	flag = false;
}

Enemy::~Enemy()
{
}

void Enemy::update()
{
	//flag = false;

	if (flag) {
		Cr = GetColor(255, 0, 0);
	}
	else {
		Cr = GetColor(255, 255, 255);
	}
}

void Enemy::react(Actor & other)
{
	flag = true;

}

void Enemy::draw() const
{
	DrawLine(position_.x - width / 2, position_.y,
		position_.x + width / 2, position_.y,
		Cr);
}
