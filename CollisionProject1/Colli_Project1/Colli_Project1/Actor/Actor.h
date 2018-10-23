#ifndef ACTOR_H_
#define ACTOR_H_

#include"../Vector/Vector2D/Vector2D.h"
#include<string>
#include"DxLib.h"
#include"../Collision/BoundingBox/BoundingBox.h"
#include"../Collision/BoundingSegment/BoundingSegment.h"
#include"../Collision/BoundingCircle/BoundingCircle.h"
class IWorld;

class Actor {
public:

	//コンスト
	Actor() = default;
	//デスト
	virtual ~Actor() {}
	//更新
	virtual void update();
	//描画
	virtual void draw()const;
	//衝突時リアクション
	virtual void react(Actor& other);

	//衝突判定
	void collide(Actor& other);
	//死亡する
	void die();

	//衝突判定しているか
	bool is_collide(const Actor& other)const;
	//死亡しているか
	bool is_dead()const;
	//名前取得
	const std::string& name()const;

	//座標を取得
	Vector2 position()const;
	//回転角度を取得
	float rotation() const;
	//移動量を取得
	Vector2 velocity()const;
	//衝突判定データを取得
	BoundingBox Box_body()const;
	//衝突判定データ取得
	BoundingSegment Seg_body()const;
	//衝突判定データ取得
	BoundingCircle	Circle_body()const;
	//衝突判定
	//コピー禁止
	Actor(const Actor& other) = delete;
	Actor& operator = (const Actor& other) = delete;

protected:
	//ワールド
	IWorld * world_{ nullptr };
	//名前
	std::string			name_{};
	//座標
	Vector2				position_{ 0.0f,0.0f };
	//回転角度
	float				angle_{ 0.0f };
	//移動量
	Vector2				velocity_{ 0.0f,0.0f };
	//衝突判定(矩形)
	BoundingBox			Box_body_{ 0.0f,0.0f,0.0f,0.0f };
	//衝突判定(線形)
	BoundingSegment		Seg_body_{ Vector2{0.0f,0.0f},Vector2{0.0f,0.0f} };
	//衝突判定(円)
	BoundingCircle		Circle_body_{ Vector2{0.0f,0.0f},0.0f };
	//死亡フラグ
	bool				dead_{ false };
	//テクスチャID
	int					texture_[10];
	//画像の倍率(1.0等倍)
	double				exRate{ 1.0f };
};
#endif // !ACTOR_H_
