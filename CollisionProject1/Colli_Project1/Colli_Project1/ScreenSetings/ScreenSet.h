#pragma once
#include "DxLib.h"
class ScreenSet {

public:

	void ScreenMode(int WINDOW_WIDTH, int WINDOW_HEIGHT, 
					int COLOR_BIT, float RATE, int ChangeWindowFlag)
	{
		//�T�C�Y�ݒ�
		SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, COLOR_BIT);
		//�`��{��
		SetWindowSizeExtendRate(1.0f);
		//�E�B���h�E���[�h�ɂ��邩
		ChangeWindowMode(ChangeWindowFlag);
		//SetUseDirect3DVersion(DX_DIRECT3D_9);
		//�`��{��
		SetWindowSizeExtendRate(RATE);

	}

	void ScreenBackMode() {
		//�`����ʂ𗠉�ʂɃZ�b�g
		SetDrawScreen(DX_SCREEN_BACK);
		//SetUseBackCulling(TRUE);

		//�v�����ɕʂ̃E�B���h�E���A�N�e�B�u�ɂȂ��Ă���肪�����悤�ɏ펞���s�t���O
		//SetAlwaysRunFlag(TRUE);
	}

};
