#ifndef BOUNDING_BOX_H_
#define BOUNDING_BOX_H_
#include"../../Vector/Vector2D/Vector2D.h"

class BoundingBox {

public:

	BoundingBox() = default;

	BoundingBox(float left, float top, float right, float bottom);

	BoundingBox(const Vector2& min, const Vector2& max);

	//“_‚ª‹éŒ`‚Ì’†‚É“ü‚Á‚Ä‚¢‚é‚©‚Ç‚¤‚©
	bool contains(const Vector2& position)const;
	bool intersects(const BoundingBox& other)const;

	BoundingBox translate(const Vector2& position)const;

	bool Extrusion(const BoundingBox& other)const;

private:
	Vector2 min_{ 0.0f,0.0f };
	Vector2 max_{ 0.0f,0.0f };


};
#endif // !BOX_H_