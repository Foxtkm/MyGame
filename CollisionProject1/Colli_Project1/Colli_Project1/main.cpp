#include"ScreenSetings/ScreenSet.h"
// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ScreenSet Screen;
	//�X�N���[���֌W�ݒ�
	Screen.ScreenMode(1920, 1080, 32, 0.6f, TRUE);

	//Dxlib����������
	if (DxLib_Init() == -1)return -1;//�G���[���N������I��
	//���`�揈��
	Screen.ScreenBackMode();


	//SetFontSize(32);

	DrawBox(0, 0, 640, 480, GetColor(255,0,0), FALSE);    // �l�p�`��`��

	ScreenFlip();	//����ʂ̓��e��\��ʂɔ��f������

	SetAlwaysRunFlag(FALSE);

	WaitKey();

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 


}