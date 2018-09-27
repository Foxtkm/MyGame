#include "Piece.h"
#include"DxLib.h"
#include"../../DxGraph/Define.h"
void Piece::initialize()
{

	

	Color_Blue = GetColor(0, 0, 255);

	int x, y;

	for (y = 0; y < BLOCK_HEIGHT; y++) {
		for (x = 0; x < BLOCK_WIDTH; x++) {
			block[y][x] = blocks[y][x];
		}
	}


	
	//block_x = 3;
	//block_y = 0;

}

void Piece::update()
{

	
		blocky += 2;
	
		coli_bottom();

	
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (blocks[y][x] == 1)DrawFormatString(x*PIECE_WIDTH + 320,blocky+ y*PIECE_WIDTH, Color_Blue, "¡");
		}
	}
	//DrawFormatString(400,100,Color_Blue,"¡");

	
}

void Piece::nextPiece()
{
}

void Piece::coli_left()
{
	flag = 0;

	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block[y][x] != 0) {
				if (stage[blocky + y][blockx + (x - 1)] != 0) {
					flag = 1;
				}
				else if (block_y_count-(blocky*BLOCK_WIDTH) > 0) {
					if (stage[blocky + (y + 1)][blockx + (x - 1)] != 0) {
						flag = 1;
					}
				}
			}
		}
	}
}

void Piece::coli_right()
{
	flag = 0;

	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block[y][x] != 0) {
				if (stage[blocky + y][blockx + (x + 1)] != 0) {
					flag = 1;
				}
				else if (block_y_count-(blocky*BLOCK_WIDTH) > 0) {
					if (stage[blocky + (y + 1)][blockx + (x + 1)] != 0) {
						flag = 1;
					}
				}
			}
		}
	}
}

void Piece::coli_bottom()
{
	flag = 0;

	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block[y][x] != 0) {
				if (stage[blocky + (y + 1)][blockx + x] != 0) {
					flag = 1;
				}
			}
		}
	}
}

void Piece::y_cout(int block_width, int stage_width)
{
	if (block_y_count > block_width*(stage_width-1)) {
		block_y_count = 0;
		blocky = 0;
	}
}

