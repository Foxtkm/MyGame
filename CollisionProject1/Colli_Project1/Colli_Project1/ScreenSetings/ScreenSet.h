#pragma once
#include "DxLib.h"
class ScreenSet {

public:

	void ScreenMode(int WINDOW_WIDTH, int WINDOW_HEIGHT, 
					int COLOR_BIT, float RATE, int ChangeWindowFlag)
	{
		//サイズ設定
		SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, COLOR_BIT);
		//描画倍率
		SetWindowSizeExtendRate(1.0f);
		//ウィンドウモードにするか
		ChangeWindowMode(ChangeWindowFlag);
		//SetUseDirect3DVersion(DX_DIRECT3D_9);
		//描画倍率
		SetWindowSizeExtendRate(RATE);

	}

	void ScreenBackMode() {
		//描画先画面を裏画面にセット
		SetDrawScreen(DX_SCREEN_BACK);
		//SetUseBackCulling(TRUE);

		//計測中に別のウィンドウがアクティブになっても問題が無いように常時実行フラグ
		//SetAlwaysRunFlag(TRUE);
	}

};
