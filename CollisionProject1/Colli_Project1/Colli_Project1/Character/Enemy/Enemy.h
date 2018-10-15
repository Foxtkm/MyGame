#ifndef ENEMY_H_
#define ENEMY_H_
#include "../../Actor/Actor.h"

class Enemy :public Actor {
public:
	Enemy(IWorld& world, const Vector2& position);
	~Enemy();
	virtual void update()override;
	virtual void react(Actor& other)override;
	virtual void draw()const;
private:
	float width{ 256 };
	float height{ 256 };
	int Cr;
	bool flag;
};
#endif // !ENEMY_H_
