#include "Stage.h"
#include "DxLib.h"
void Stage::initalize()
{
	make_block();

	int i, j;

	//縦(行)に要素を入れる。今回は"9"
	for (i = 0; i < FIELD_HEIGHT; i++) {
		//横(列)に要素を入れる。今回は"9"
		for (j = 0; j < FIELD_WIDTH; j++) {

			//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(0番目)に"9"を入れる。
			stage[i][0] = 9;
			//FIELD_HEIGHTの行(20番目)に"9"を入れる、,FIELD_WIDTHの列(11個分)に"9"を入れる。
			stage[19][j] = 9;
			//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(11番目)に"9"を入れる。
			stage[i][14] = 9;
		}
	}



	//色の指定
	Color_Red = GetColor(255, 0, 0);
	Color_Green = GetColor(0, 255, 0);
	Color_Blue = GetColor(0, 0, 255);


	flag = 0;
	flag2 = 0;

	px = 0;
	py = 0;
	px2 = 15;
	py2 = 2;


	img1 = LoadGraph("Resource/block.png");
}

void Stage::update()
{

	coli_bottom();
	if (flag == 0) {
		py += 1;
	}
	else if (flag == 1) {
		py += 0;
	}
	if (flag2 == 0) {
		py2 += 1;
	}
	else if (flag2 == 1) {
		py2 += 0;
	}
}

void Stage::draw()
{
	int x, y;

	//壁の描画
	for (y = 0; y < FIELD_HEIGHT; y++) {
		for (x = 0; x < FIELD_WIDTH; x++) {
			if (stage[y][x] == 9)DrawFormatString(x*CELL_BLOCK,
				y * CELL_BLOCK, Color_Red, "■");
		}
	}

	//ブロックの描画
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block1[y][x] == 1)DrawFormatString
			(px * CELL_BLOCK + x * CELL_BLOCK,
				py * CELL_BLOCK + y * CELL_BLOCK,
				Color_Blue, "■");
		}
	}

	//ブロックの描画
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block2[y][x] == 1)DrawFormatString
			(px2 * CELL_BLOCK + x * CELL_BLOCK,
				py2 * CELL_BLOCK + y * CELL_BLOCK,
				Color_Blue, "■");
		}
	}

}

void Stage::make_block()
{
	//ステージの初期化
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			stage[i][j] = 0;
		}
	}

	//ブロックの初期化
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			block1[y][x] = blocks1[y][x];
		}
	}

	//ブロックの初期化
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			block2[y][x] = blocks2[y][x];
		}
	}
}

void Stage::coli_bottom()
{
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block1[y][x] != 0)
			{
				if (stage[py + (y + 1)][px + x] != 0) {
					flag = 1;
				}
			}
		}
	}

	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block2[y][x] != 0)
			{
				if (stage[py + (y + 1)][px + x] != 0) {
					flag2 = 1;
				}
			}
		}
	}
}

void Stage::end()
{
}
