#ifndef IWORLD_H_
#define IWORLD_H_

#include"../../Actor/ActorPtr/ActorPtr.h"
#include<string>

enum class ActorGroup;
class Field;

class IWorld {
public:

	//仮想デストラクタ
	virtual ~IWorld(){}
	//アクター追加
	virtual void add_actor(ActorGroup group, const ActorPtr& actor) = 0;
	// アクターを検索 
	virtual ActorPtr find_actor(ActorGroup group, const std::string& name) const = 0; 
	// アクター数の取得 
	virtual unsigned int count_actor(ActorGroup group) const = 0; 
	// フィールドを取得 
	virtual Field& field() = 0;
};
#endif // !IWORLD_H_
