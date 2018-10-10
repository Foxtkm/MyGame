#ifndef NUCLEUS_H_
#define NUCLEUS_H_

#include"../../Actor/Actor.h"

class Nucleus :public Actor 
{
public:
	Nucleus(IWorld& world, const Vector2& position);

	virtual void update()override;
	virtual void react(Actor& other)override;

private:
	Vector2 velocity2;


};

#endif // !NUCLEUS_H_
