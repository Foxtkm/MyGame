#include"ScreenSetings/ScreenSet.h"
#include"Character/Player/Player.h"
#include"Library/Timer/FPSCounter.h"
#include"World/World.h"
#include"Actor/ActorGroup/ActorGroup.h"


// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ScreenSet Screen;
	FPSCounter fps;
	World world;

	//�X�N���[���֌W�ݒ�
	Screen.ScreenMode(1920, 1080, 32, 0.6f, TRUE);

	//Dxlib����������
	if (DxLib_Init() == -1)return -1;//�G���[���N������I��
	//���`�揈��
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




		ScreenFlip();	//����ʂ̓��e��\��ʂɔ��f������
		fps.Wait();
	}



	SetAlwaysRunFlag(FALSE);

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 


}