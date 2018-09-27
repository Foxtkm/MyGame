#include "ActorGroupManager.h"

void ActorGroupManager::add(ActorGroup group)
{
	actor_group_map_[group].clear();
}

void ActorGroupManager::add(ActorGroup group, const ActorPtr & actor)
{
	actor_group_map_[group].add(actor);
}

void ActorGroupManager::update()
{
	for (auto& pair : actor_group_map_) {
		pair.second.update();
	}
}

void ActorGroupManager::draw() const
{
	for (auto& pair : actor_group_map_) {
		draw(pair.first);
	}
}

void ActorGroupManager::draw(ActorGroup group) const
{
	actor_group_map_.at(group).draw();
}

void ActorGroupManager::clear()
{
	actor_group_map_.clear();
}

ActorPtr ActorGroupManager::find(ActorGroup group, const std::string & name) const
{
	return actor_group_map_.at(group).find(name);
}

unsigned int ActorGroupManager::count(ActorGroup group) const
{
	return actor_group_map_.at(group).count();
}

void ActorGroupManager::collide(ActorGroup group1, ActorGroup group2)
{
	actor_group_map_[group1].collide(actor_group_map_[group2]);
}

void ActorGroupManager::remove()
{
	for (auto& pair : actor_group_map_) {
		pair.second.remove();
	}
}
