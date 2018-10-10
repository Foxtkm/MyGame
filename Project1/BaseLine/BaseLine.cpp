#include "BaseLine.h"
#include"../World/IWorld/IWorld.h"
#include"../Block/Nucleus/Nucleus.h"
#include"../Actor/ActorGroup/ActorGroup.h"

BaseLine::BaseLine(IWorld & world, const Vector2 & position) {
	world_ = &world;
	name_ = "BaseLine";
	body_ = BoundingRectangle{-400.0f,0.0f,400.0f,5.0f };
	position_ = position;
	
	world_->add_actor(ActorGroup::Nucleus,
		new_actor<Nucleus>(*world_, position_));
}

void BaseLine::update()
{
	//Vector2 velocity{ 0.0f,0.0f };


	//if (CheckHitKey(KEY_INPUT_W))velocity.y = -5.0f;
	//if (CheckHitKey(KEY_INPUT_A))velocity.x = -5.0f;
	//if (CheckHitKey(KEY_INPUT_S))velocity.y = 5.0f;
	//if (CheckHitKey(KEY_INPUT_D))velocity.x = 5.0f;
	//velocity_ = velocity.normalize()*2.0f;
	//position_ += velocity;

	const auto square_block = world_->find_actor(ActorGroup::Square_Block, "Square");
	if (square_block != nullptr) {

		const auto velocity = (square_block->position() - position_).normalize()*10.0f;
		position_ .x+= velocity.x;

	}


	DrawLine(position_.x-400, position_.y, position_.x + 400, position_.y, GetColor(255, 255, 255));
}
