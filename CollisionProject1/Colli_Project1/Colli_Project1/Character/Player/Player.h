#ifndef PLAYER_H_
#define PLAYER_H_

#include"../../Actor/Actor.h"

class Player:public Actor {
public:

	Player(IWorld& world,const Vector2& position);
	~Player();

	virtual void update()override;
	virtual void react(Actor& other)override;
	virtual void draw()const;
private:
	float width{ 256 };
	//float height{ 256 };
};
#endif // !PLAYER_H_
