#include "BaseLine.h"
#include"../World/IWorld/IWorld.h"

BaseLine::BaseLine(IWorld & world, const Vector2 & position) {
	world_ = &world;
	name_ = "BaseLine";
	body_ = BoundingRectangle{0.0f,0.0f,800.0f,5.0f };
	position_ = position;
}

void BaseLine::update()
{
	Vector2 velocity{ 0.0f,0.0f };
	if (CheckHitKey(KEY_INPUT_W))velocity.y = -5.0f;
	if (CheckHitKey(KEY_INPUT_A))velocity.x = -5.0f;
	if (CheckHitKey(KEY_INPUT_S))velocity.y = 5.0f;
	if (CheckHitKey(KEY_INPUT_D))velocity.x = 5.0f;
	//velocity_ = velocity.normalize()*2.0f;
	position_ += velocity;



	DrawLine(position_.x, position_.y, position_.x + 800, position_.y, GetColor(255, 255, 255));
}
