#include "Application/Application.h"
#include"Timer/FPSCounter.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	//�T�C�Y�ݒ�
	SetGraphMode(1920, 1080, 32);
	//�`��{��
	SetWindowSizeExtendRate(1.0f);
	//�E�B���h�E���[�h�ɂ��邩�ǂ���
	ChangeWindowMode(TRUE);
	SetUseDirect3DVersion(DX_DIRECT3D_9);
	SetWindowSizeExtendRate(0.6f);

	//Dxlib����������
	if (DxLib_Init() == -1)return -1;//�G���[���N������I��
	SetDrawScreen(DX_SCREEN_BACK);	//�`����ʂ𗠉�ʂɃZ�b�g
	SetUseBackCulling(TRUE);

	//�v�����ɕʂ̃E�B���h�E���A�N�e�B�u�ɂȂ��Ă���肪�����悤�ɏ펞���s�t���O���Z�b�g
	SetAlwaysRunFlag(TRUE);
	SetFontSize(32);


	Application App;	//�A�v���P�[�V����
	FPSCounter fps;		//Fps�����ɂ���N���X
	fps.initialize();	//Fps������
	App.start();		//�A�v���P�[�V����������

	while (App.isRunning()) {
		fps.update();	//Fps�X�V

		App.update();	//�A�v���P�[�V�����X�V
		App.draw();		//�A�v���P�[�V�����`��
		ScreenFlip();	//����ʂ̓��e��\��ʂɔ��f������

		fps.Wait();		//Fps�ҋ@
	}

	App.end();			//�A�v���P�[�V�����I��

	SetAlwaysRunFlag(FALSE);



	//DxLib�g�p�I������
	DxLib_End();

	return 0;	//�\�t�g�I��
}