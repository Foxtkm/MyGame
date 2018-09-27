#include "Timer.h"
#include"DxLib.h"

//�R���X�g���N�^
Timer::Timer() :
	m_LastFrame(0), m_LastTime(0), m_RealtimeSinceStartup(0), m_FrameCount(0), m_DeltaTime(0),
	mCounter(0), mFpsTime{ 0,0 }, mFpsTime_i(0), mFps(0.0f)
{

}

//�C���X�^���X
Timer & Timer::GetInstance()
{
	static Timer instance;
	return instance;
}

//�X�V����
void Timer::update()
{
	m_FrameCount++;
	m_RealtimeSinceStartup = m_FrameCount / 60;

	float currentFrame = m_FrameCount;
	if (currentFrame != m_LastFrame) {
		float currentTime = m_RealtimeSinceStartup;
		m_DeltaTime = currentTime - m_LastTime;
		m_LastTime = currentTime;
		m_LastFrame = currentFrame;
	}
}

float Timer::deltaTime()
{
	return m_DeltaTime;
}

#ifdef NDEBUG
void Timer::draw_fps()
{
}
#else
//fps�̕\��
void Timer::draw_fps() {
	if (mFpsTime_i == 0)
		mFpsTime[0] = GetNowCount();               //1���ڂ̎��Ԏ擾
	if (mFpsTime_i == 49) {
		mFpsTime[1] = GetNowCount();               //50���ڂ̎��Ԏ擾
		mFps = 1000.0f / ((mFpsTime[1] - mFpsTime[0]) / 50.0f);//���肵���l����fps���v�Z
		mFpsTime_i = 0;//�J�E���g��������
	}
	else
		mFpsTime_i++;//���݉����ڂ��J�E���g
	if (mFps != 0)
		DrawFormatString(0, 0, GetColor(255, 255, 255), "FPS %.1f", mFps); //fps��\��
}


#endif // !NDEBUG


