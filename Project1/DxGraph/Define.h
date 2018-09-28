#pragma once

static int const WINDOW_WIDTH = 1920;
static int const WINDOW_HEIGHT = 1080;

class Define {
public:
	//�t�B�[���h�̃Z����(��)
#define FIELD_WIDTH 15
//�t�B�[���h�̃Z����(�c)
#define FIELD_HEIGHT 20

//�Z���̃s�N�Z����
#define CELL_WIDTH 32

	static int stage[FIELD_HEIGHT][FIELD_WIDTH];

	void start() {
		for (int i = 0; i < FIELD_HEIGHT; i++) {
			for (int j = 0; j < FIELD_WIDTH; j++) {
				stage[i][j] = 0;
			}
		}

		int i, j;

		//�c(�s)�ɗv�f������B�����"9"
		for (i = 0; i < FIELD_HEIGHT; i++) {
			//��(��)�ɗv�f������B�����"9"
			for (j = 0; j < FIELD_WIDTH; j++) {

				//FIELD_HEIGHT�̍s(20��)��"9"������A,FIELD_WIDTH�̗�(0�Ԗ�)��"9"������B
				stage[i][0] = 9;
				//FIELD_HEIGHT�̍s(20�Ԗ�)��"9"������A,FIELD_WIDTH�̗�(11��)��"9"������B
				stage[19][j] = 9;
				//FIELD_HEIGHT�̍s(20��)��"9"������A,FIELD_WIDTH�̗�(11�Ԗ�)��"9"������B
				stage[i][14] = 9;
			}
		}
	}

};