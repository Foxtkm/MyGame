#ifndef BASE_LINE_H_
#define BASE_LINE_H_
#include"../Actor/Actor.h"

class BaseLine : public Actor{
public:
	BaseLine(IWorld& world, const Vector2& position);

	virtual void update()override;

private:

};
#endif // !BASE_LINE_H_
