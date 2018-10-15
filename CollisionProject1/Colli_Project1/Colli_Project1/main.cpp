#include"ScreenSetings/ScreenSet.h"
#include"Character/Player/Player.h"
#include"Library/Timer/FPSCounter.h"
#include"World/World.h"
#include"Actor/ActorGroup/ActorGroup.h"


// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ScreenSet Screen;
	FPSCounter fps;
	World world;

	//スクリーン関係設定
	Screen.ScreenMode(1920, 1080, 32, 0.6f, TRUE);

	//Dxlib初期化処理
	if (DxLib_Init() == -1)return -1;//エラーが起きたら終了
	//裏描画処理
	Screen.ScreenBackMode();

	fps.initialize();

	SetFontSize(32);

	world.add_actor(ActorGroup::Player,
					new_actor<Player>(world, Vector2(0,700)));


	while (ProcessMessage() == 0) 
	{
		ClearDrawScreen();
		fps.update();
		fps.Draw();


		world.update();
		world.draw();




		ScreenFlip();	//裏画面の内容を表画面に反映させる
		fps.Wait();
	}



	SetAlwaysRunFlag(FALSE);

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 


}