#include "Application/Application.h"
#include"Timer/FPSCounter.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	//サイズ設定
	SetGraphMode(1920, 1080, 32);
	//描画倍率
	SetWindowSizeExtendRate(1.0f);
	//ウィンドウモードにするかどうか
	ChangeWindowMode(TRUE);
	SetUseDirect3DVersion(DX_DIRECT3D_9);
	SetWindowSizeExtendRate(0.6f);

	//Dxlib初期化処理
	if (DxLib_Init() == -1)return -1;//エラーが起きたら終了
	SetDrawScreen(DX_SCREEN_BACK);	//描画先画面を裏画面にセット
	SetUseBackCulling(TRUE);

	//計測中に別のウィンドウがアクティブになっても問題が無いように常時実行フラグをセット
	SetAlwaysRunFlag(TRUE);
	SetFontSize(32);


	Application App;	//アプリケーション
	FPSCounter fps;		//Fpsを一定にするクラス
	fps.initialize();	//Fps初期化
	App.start();		//アプリケーション初期化

	while (App.isRunning()) {
		fps.update();	//Fps更新

		App.update();	//アプリケーション更新
		App.draw();		//アプリケーション描画
		ScreenFlip();	//裏画面の内容を表画面に反映させる

		fps.Wait();		//Fps待機
	}

	App.end();			//アプリケーション終了

	SetAlwaysRunFlag(FALSE);



	//DxLib使用終了処理
	DxLib_End();

	return 0;	//ソフト終了
}