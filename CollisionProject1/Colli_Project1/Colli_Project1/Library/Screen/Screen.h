#pragma once
#include<DxLib.h>
class Screen {
public:
	void ScreenMode(int SCREEN_WIDTH, int SCREEN_HEIGHT,
		 float RATE, int ChangeWindowFlag)
	{
		//�T�C�Y�ݒ�
		SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT,32);
		//�`��{��
		SetWindowSizeExtendRate(1.0f);
		//�E�B���h�E���[�h�ɂ��邩
		ChangeWindowMode(ChangeWindowFlag);
		SetUseDirect3DVersion(DX_DIRECT3D_9);
		//�`��{��
		SetWindowSizeExtendRate(RATE);

	}

	void ScreenBackMode() {
		//�`����ʂ𗠉�ʂɃZ�b�g
		SetDrawScreen(DX_SCREEN_BACK);
		SetUseBackCulling(TRUE);
	}
};
