#include "Enemy.h"

Enemy::Enemy(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Enemy";
	Seg_body_ = BoundingSegment{ Vector2{-width / 2,0},Vector2{width / 2,0} };
	//Box_body_ = Box{ -250,-250,250,250 };
	position_ = position;
	Cr = GetColor(255, 255, 255);
	flag = false;
}

Enemy::~Enemy()
{
}

void Enemy::update()
{

	if (flag) {
		Cr = GetColor(255, 0, 0);
	}
	else {
		Cr = GetColor(255, 255, 255);
	}
	flag = false;

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

	/*DrawBox(position_.x - 250, position_.y - 250,
		position_.x + 250, position_.y + 250,
		Cr, FALSE);*/
}
