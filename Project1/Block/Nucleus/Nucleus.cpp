#include "Nucleus.h"
#include"../../World/IWorld/IWorld.h"
#include"../../Field/Field.h"
#include"../../Actor/ActorGroup/ActorGroup.h"

Nucleus::Nucleus(IWorld & world, const Vector2 & position)
{
	world_ = &world;
	name_ = "Nucleus";
	position_ = position;
	body_ = BoundingRectangle{ -64.0f,-32.0f,64.0f,32.0f };
	texture_[1] = LoadGraph("Resource/Nucleus.png");
	
}

void Nucleus::update()
{
	const auto player = world_->find_actor(ActorGroup::Player, "BaseLine");
	if (player != nullptr) {
		position_ = player->position() + Vector2{0.0f,-32.0f};
	}
}

void Nucleus::react(Actor & other)
{
}
