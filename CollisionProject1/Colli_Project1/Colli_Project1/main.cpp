#include"ScreenSetings/ScreenSet.h"
// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ScreenSet Screen;
	//スクリーン関係設定
	Screen.ScreenMode(1920, 1080, 32, 0.6f, TRUE);

	//Dxlib初期化処理
	if (DxLib_Init() == -1)return -1;//エラーが起きたら終了
	//裏描画処理
	Screen.ScreenBackMode();


	//SetFontSize(32);

	DrawBox(0, 0, 640, 480, GetColor(255,0,0), FALSE);    // 四角形を描画

	ScreenFlip();	//裏画面の内容を表画面に反映させる

	SetAlwaysRunFlag(FALSE);

	WaitKey();

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 


}