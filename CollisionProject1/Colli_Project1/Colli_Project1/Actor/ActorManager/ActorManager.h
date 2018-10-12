#ifndef ACTOR_MANAGER_H_
#define ACTOR_MANAGER_H_

#include"../Actor.h"
#include"../ActorPtr/ActorPtr.h"
#include<list>

class ActorManager {
public:
	//コンストラクタ
	ActorManager() = default;
	//アクターの追加
	void add(const ActorPtr& actor);
	//更新
	void update();
	//描画
	void draw()const;
	//衝突判定
	void collide();
	//衝突判定
	void collide(Actor& other);
	//衝突判定
	void collide(ActorManager& other);
	//削除
	void remove();
	//アクターの検索
	ActorPtr find(const std::string& name)const;
	//アクター数を返す
	unsigned int count() const;
	//消去
	void clear();
	//コピー禁止
	ActorManager(const ActorManager& other) = delete;
	ActorManager& operator =(const ActorManager& other) = delete;

private:
	using ActorList = std::list<ActorPtr>;
	//アクターリスト
	ActorList	actors_;


};

#endif // !ACTOR_MANAGER_H_
