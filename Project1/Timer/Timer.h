#ifndef TIMER_H_
#define TIMER_H_


//���ԊǗ��N���X
class Timer {
public:
	//�R���X�g���N�^
	Timer();
	//�C���X�^���X
	static Timer &GetInstance();
	//�X�V����
	void update();
	//�f���^�^�C����Ԃ�
	float deltaTime();
	//fps�̕\��
	void draw_fps();
private:
	float m_LastFrame;
	float m_LastTime;
	float m_RealtimeSinceStartup;
	float m_FrameCount;
	float m_DeltaTime;
private:
	int mCounter;
	int mFpsTime[2];
	int mFpsTime_i;
	float mFps;

};

#endif // !TIMER_H_
