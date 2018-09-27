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

	//縦(行)に要素を入れる。今回は"9"
	for (i = 0; i < FIELD_HEIGHT; i++) {
		//横(列)に要素を入れる。今回は"9"
		for (j = 0; j < FIELD_WIDTH; j++) {

			//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(0番目)に"9"を入れる。
		//	stage[i][0] = 9;
			//FIELD_HEIGHTの行(20番目)に"9"を入れる、,FIELD_WIDTHの列(11個分)に"9"を入れる。
			stage[19][j] = 9;
			//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(11番目)に"9"を入れる。
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
