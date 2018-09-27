#ifndef ACTOR_GROUP_MANAGER_H_
#define ACTOR_GROUP_MANAGER_H_

#include "../ActorManager/ActorManager.h"
#include<map>

enum class ActorGroup;

class ActorGroupManager {

public:
	//コンストラクタ
	ActorGroupManager() = default;
	// グループの追加
	void add(ActorGroup group);
	// アクターの追加 
	void add(ActorGroup group, const ActorPtr& actor);
	// 更新 
	void update();
	// 描画 
	void draw() const;
	// 描画 
	void draw(ActorGroup group) const;
	// 消去 
	void clear();
	// アクターを検索 
	ActorPtr find(ActorGroup group, const std::string& name) const;
	// アクター数を返す 
	unsigned int count(ActorGroup group) const;
	// 衝突判定 
	void collide(ActorGroup group1, ActorGroup group2);
	// 削除 
	void remove();

	// コピー禁止 
	ActorGroupManager(const ActorGroupManager& other) = delete;
	ActorGroupManager& operator=(const ActorGroupManager& other) = delete;
private:
	using ActorGroupMap = std::map<ActorGroup, ActorManager>; ActorGroupMap actor_group_map_;
};

#endif // !ACTOR_GROUP_MANAGER_H_
