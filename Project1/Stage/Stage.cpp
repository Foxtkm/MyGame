#include "Stage.h"
#include "DxLib.h"
void Stage::initalize()
{
	
	define.start();

	piece_.initialize();
	

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
			if (define.stage[y][x] == 9)DrawFormatString(x*CELL_BLOCK,
				y * CELL_BLOCK , Color_Red, "¡");
		}
	}

	piece_.draw();
	//DrawFormatString(64, 64, Color_Green, "1");

//	piece_.y_cout(CELL_BLOCK, FIELD_HEIGHT);
}

void Stage::make_block()
{
	//int x, y;

	//for (y = 0; y < BLOCK_HEIGHT; y++) {
	//	for (x = 0; x < BLOCK_WIDTH; x++) {
	//		block[y][x] = blocks[y][x];
	//	}
	//}
}

void Stage::end()
{
}
