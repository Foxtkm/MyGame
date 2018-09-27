#ifndef APPLICATION_H_
#define APPLICATION_H_

#include"DxLib.h"
#include"../DxGraph/Define.h"
#include"../Block/Square/Square.h"
#include"../BaseLine/BaseLine.h"
#include"../Texture/TextureID/TextureID.h"
#include"../Actor/ActorGroup/ActorGroup.h"
#include"../World/World.h"
#include"../Timer/Timer.h"
#include"../Stage/Stage.h"

class Application {
public:
	//�R���X�g���N�^
	Application();

	~Application();

public:

	//�J�n
	void start();
	//�X�V
	void update();
	//�`��
	void draw();
	//�I��
	void end();

	//���s����
	bool isRunning() { return (ProcessMessage() == 0 && ClearDrawScreen() == 0); }

	//�R�s�[�֎~
	Application(const Application& other) = delete;
	Application& operator =(const Application& other) = delete;

public:
	World world_;	
	int StartTime{ 0 };
	//// �E�B���h�E�̕�
	//int mWidth;
	//// �E�B���h�E�̍���
	//int mHeight;
	//// �E�C���h�E�̕`��䗦
	//float mRate;
	//// �E�C���h�E���[�h���H
	//int mWindow;
	//// FPS
	//float mFps;
	Timer timer;

	int pos[5][5] = {
	{ 0,0,0,0,0 },
	{ 0,0,0,0,1 },
	{ 0,0,0,0,1 },
	{ 0,0,0,0,1 },
	{ 0,0,1,1,1 },
	};
private:
	int texSize{ 32 };
	Stage stage_;
};
#endif // !APPLICATION_H_
