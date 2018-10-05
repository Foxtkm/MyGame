#ifndef FIELD_H_
#define FIELD_H_

#include "../Collision/Body/BoundingRectangle/BoundingRectangle.h"

class Field {
public:
	//コンストラクタ
	Field() = default;
	//コンストラクタ
	explicit Field(const BoundingRectangle& area);
	//初期化
	void initialize();
	//更新
	void update();
	//描画
	void draw()const;
	// エリアの外側か？ 
	bool is_outside(const BoundingRectangle& rect);
	// エリアの取得 
	const BoundingRectangle& area() const;

private:
	// 土台エリア 
	BoundingRectangle area_{ 0.0f, 0.0f, 1920.0f, 1080.0f };

	BoundingRectangle extend_area_{ area_.expand({128.0f,128.0f}) };
};

#endif // !FIELD_H_
