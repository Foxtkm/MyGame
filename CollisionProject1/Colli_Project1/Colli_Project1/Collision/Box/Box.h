#ifndef BOX_H_
#include"../../Vector/Vector2D/Vector2D.h"

class Box {

public:

	Box() = default;

	Box(float left, float top, float right,float bottom);

	Box(const Vector2& min, const Vector2& max);


	//“_‚ª‹éŒ`‚Ì’†‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©
	bool contains(const Vector2& position)const;
	bool intersects(const Box& other)const;

	Box translate(const Vector2& position)const;

private:
	Vector2 min_{ 0.0f,0.0f };
	Vector2 max_{ 0.0f,0.0f };


};
#endif // !BOX_H_
