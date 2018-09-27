#include "Stage.h"
#include "DxLib.h"
#include"../DxGraph/Define.h"
void Stage::initalize()
{
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			stage[i][j] = 0;
		}
	}



	SetFontSize(32);
	piece_.initialize();
	int i, j;

	//�c(�s)�ɗv�f������B�����"9"
	for (i = 0; i < FIELD_HEIGHT; i++) {
		//��(��)�ɗv�f������B�����"9"
		for (j = 0; j < FIELD_WIDTH; j++) {

			//FIELD_HEIGHT�̍s(20��)��"9"������A,FIELD_WIDTH�̗�(0�Ԗ�)��"9"������B
		//	stage[i][0] = 9;
			//FIELD_HEIGHT�̍s(20�Ԗ�)��"9"������A,FIELD_WIDTH�̗�(11��)��"9"������B
			stage[19][j] = 9;
			//FIELD_HEIGHT�̍s(20��)��"9"������A,FIELD_WIDTH�̗�(11�Ԗ�)��"9"������B
		//	stage[i][10] = 9;
		}
	}

	Color_Red = GetColor(255, 0, 0);
	Color_Green = GetColor(0, 255, 0);



	img1 = LoadGraph("Resource/block.png");
}

void Stage::update()
{
	piece_.update();
}

void Stage::draw()
{
	int x, y;

	for (y = 0; y < FIELD_HEIGHT; y++) {
		for (x = 0; x < FIELD_WIDTH; x++) {
			if (stage[y][x] == 9)DrawFormatString(x*CELL_BLOCK + 256,
				y * CELL_BLOCK + 256, Color_Red, "9");
		}
	}
	//DrawFormatString(64, 64, Color_Green, "1");

//	piece_.y_cout(CELL_BLOCK, FIELD_HEIGHT);
}

void Stage::make_block()
{
	int x, y;

	for (y = 0; y < BLOCK_HEIGHT; y++) {
		for (x = 0; x < BLOCK_WIDTH; x++) {
			block[y][x] = blocks[y][x];
		}
	}
}
