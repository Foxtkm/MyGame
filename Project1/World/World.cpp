#include "World.h"
#include"../Actor/Actor.h"
#include"../Actor/ActorGroup/ActorGroup.h"

World::World()
{
	initialize();
}

void World::initialize()
{
	clear();
	actors_.add(ActorGroup::Rectangle_Block);
	actors_.add(ActorGroup::Square_Block);
	actors_.add(ActorGroup::Player);
	
	field_.initialize();
}

void World::update()
{
	field_.update();
	actors_.update();
	actors_.collide(ActorGroup::Player, ActorGroup::Square_Block);
	actors_.collide(ActorGroup::Rectangle_Block, ActorGroup::Rectangle_Block2);
	actors_.remove();
}

void World::draw() const
{
	field_.draw();
	actors_.draw();
}

void World::clear()
{
	actors_.clear();
}

void World::add_actor(ActorGroup group, const ActorPtr & actor)
{
	actors_.add(group, actor);
}

ActorPtr World::find_actor(ActorGroup group, const std::string & name) const
{
	return actors_.find(group, name);
}

unsigned int World::count_actor(ActorGroup group) const
{
	return actors_.count(group);
}

Field & World::field()
{
	return field_;
}
