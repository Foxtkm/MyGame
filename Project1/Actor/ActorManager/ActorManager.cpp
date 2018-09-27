#include "ActorManager.h"

void ActorManager::add(const ActorPtr & actor)
{
	actors_.push_front(actor);
}

void ActorManager::update()
{
	for (const auto& actor : actors_) {
		actor->update();
	}
}

void ActorManager::draw() const
{
	for (const auto& actor : actors_) {
		actor->draw();
	}
}

void ActorManager::collide()
{
	for (auto i = actors_.begin(); i != actors_.end(); ++i) {
		for (auto j = std::next(i); j != actors_.end(); ++j) {
			(*i)->collide(**j);
		}
	}
}

void ActorManager::collide(Actor & other)
{
	for (const auto& actor : actors_) {
		other.collide(*actor);
	}
}

void ActorManager::collide(ActorManager & other)
{
	for (const auto& actor : actors_) {
		other.collide(*actor);
	}
}

void ActorManager::remove()
{
	actors_.remove_if([](const ActorPtr& actor) {return actor->is_dead(); });
}

ActorPtr ActorManager::find(const std::string & name) const
{
	for (const auto& actor : actors_) 
	{
		if (actor->name() == name) { return actor; } 
	}
	return ActorPtr();
}

unsigned int ActorManager::count() const
{
	return actors_.size();
}

void ActorManager::clear()
{
	actors_.clear();
}
