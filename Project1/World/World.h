#ifndef WORLD_H_
#define WORLD_H_

#include"IWorld/IWorld.h"
#include"../Actor/ActorGroupManager/ActorGroupManager.h"
#include"../Field/Field.h"
#include"../Actor/ActorPtr/ActorPtr.h"
#include<functional>

class World :public IWorld {
public:
	// コンストラクタ 
	World(); 
	// 初期化 
	void initialize(); 
	// 更新
	void update(); 
	// 描画 
	void draw() const; 

	// 消去 
	void clear();
// アクターの追加 
	virtual void add_actor(ActorGroup group, const ActorPtr& actor) override;
	// アクターの検索 
	virtual ActorPtr find_actor(ActorGroup group, const std::string& name) const override;
	// アクター数の取得 
	virtual unsigned int count_actor(ActorGroup group) const override;

	// フィールドを取得
	virtual Field& field() override;
// コピー禁止 
	World(const World& other) = delete; World& operator = (const World& other) = delete;
private: 
	// アクターマネージャー 
	ActorGroupManager actors_; 
	// フィールド 
	Field field_; 

};
#endif // !WORLD_H_
