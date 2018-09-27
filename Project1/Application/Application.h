#ifndef APPLICATION_H_
#define APPLICATION_H_

#include"DxLib.h"
#include"../DxGraph/Define.h"
#include"../Block/Square/Square.h"
#include"../BaseLine/BaseLine.h"
#include"../Texture/TextureID/TextureID.h"
#include"../Actor/ActorGroup/ActorGroup.h"
#include"../World/World.h"
#include"../Timer/Timer.h"
#include"../Stage/Stage.h"

class Application {
public:
	//コンストラクタ
	Application();

	~Application();

public:

	//開始
	void start();
	//更新
	void update();
	//描画
	void draw();
	//終了
	void end();

	//実行中か
	bool isRunning() { return (ProcessMessage() == 0 && ClearDrawScreen() == 0); }

	//コピー禁止
	Application(const Application& other) = delete;
	Application& operator =(const Application& other) = delete;

public:
	World world_;	
	int StartTime{ 0 };
	//// ウィンドウの幅
	//int mWidth;
	//// ウィンドウの高さ
	//int mHeight;
	//// ウインドウの描画比率
	//float mRate;
	//// ウインドウモードか？
	//int mWindow;
	//// FPS
	//float mFps;
	Timer timer;

	int pos[5][5] = {
	{ 0,0,0,0,0 },
	{ 0,0,0,0,1 },
	{ 0,0,0,0,1 },
	{ 0,0,0,0,1 },
	{ 0,0,1,1,1 },
	};
private:
	int texSize{ 32 };
	Stage stage_;
};
#endif // !APPLICATION_H_
