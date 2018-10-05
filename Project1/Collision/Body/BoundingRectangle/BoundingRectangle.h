#ifndef BOUNDING_RECTANGLE_H_
#define BOUNDING_RECTANGLE_H_

#include "DxLib.h"
#include"../../../Vector/Vector2D/Vector2D.h"

class BoundingRectangle {
public:
	//コンストラクタ　
	BoundingRectangle() = default;

	//コンストラクタ
	BoundingRectangle(float left, float top, float right, float bottom);

	//コンストラクタ
	BoundingRectangle(const Vector2& min, const Vector2& max);

	// 点が矩形の内側に入っているか?
	bool contains(const Vector2& position)const;

	//矩形が重なっているか
	bool intersects(const BoundingRectangle& other)const;

	//平行移動
	BoundingRectangle translate(const Vector2& position)const;

	//サイズ拡張
	BoundingRectangle expand(const Vector2& size)const;

	//幅
	float width()const;
	//高さ
	float height()const;


private:
	Vector2 min_{ 0.0f,0.0f };
	Vector2 max_{ 0.0f,0.0f };

};

#endif // !BOUNDING_RECTANGLE_H_
