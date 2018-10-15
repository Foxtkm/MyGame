#pragma once
#include<DxLib.h>
class Screen {
public:
	void ScreenMode(int SCREEN_WIDTH, int SCREEN_HEIGHT,
		 float RATE, int ChangeWindowFlag)
	{
		//サイズ設定
		SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT,32);
		//描画倍率
		SetWindowSizeExtendRate(1.0f);
		//ウィンドウモードにするか
		ChangeWindowMode(ChangeWindowFlag);
		SetUseDirect3DVersion(DX_DIRECT3D_9);
		//描画倍率
		SetWindowSizeExtendRate(RATE);

	}

	void ScreenBackMode() {
		//描画先画面を裏画面にセット
		SetDrawScreen(DX_SCREEN_BACK);
		SetUseBackCulling(TRUE);
	}
};
