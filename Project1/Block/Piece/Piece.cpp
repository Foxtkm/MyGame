#include "Piece.h"
#include"DxLib.h"
void Piece::initialize()
{

	//make_block_flag = 1;

	Color_Blue = GetColor(0, 0, 255);


	//if (make_block_flag == 1) {
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			block1[y][x] = blocks1[y][x];
		}
	}

	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			block2[y][x] = blocks2[y][x];
		}
	}
	//	make_block_flag = 0;
	//}

	//block_y_count = 0;
	//blockx = 2;
	////block_y = 0;
	flag = 0;

	px = 0;
	py = 0;

}

void Piece::update()
{

	/*if ( key[CheckHitKey(KEY_INPUT_S)]%5==1) {
		coli_bottom();
		if (flag == 0) {
			blocky += 1;
			block_y_count = blocky * PIECE_WIDTH;

		}

	}*/
	/*if (CheckHitKey(KEY_INPUT_W))blocky -= 1;
	if (CheckHitKey(KEY_INPUT_A))blockx -= 1;
	if (CheckHitKey(KEY_INPUT_D))blockx += 1;
*/

	coli_bottom();
	if (flag == 0) {
		py += 1;
	}
	if (flag == 1)py += 0;

	//DrawFormatString(400,100,Color_Blue,"¡");


}
void Piece::draw()
{/*
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block[y][x] == 1)DrawFormatString(blockx*PIECE_WIDTH + x * PIECE_WIDTH, block_y_count + y * PIECE_WIDTH, Color_Blue, "¡");
		}
	}*/

	//block1‚É“ü‚Á‚Ä‚é—v‘f‚ðŒŸõ‚µ‚Ä"1"‚ÌêŠ‚ðÂ‚¢ŽlŠp‚Å•`‰æ
	//px,py‚ªÀ•W(position)
	for (int y = 0; y < BLOCK_HEIGHT; y++) {
		for (int x = 0; x < BLOCK_WIDTH; x++) {
			if (block1[y][x] == 1)DrawFormatString
			(px * PIECE_WIDTH + x * PIECE_WIDTH, 
			 py * PIECE_WIDTH + y * PIECE_WIDTH,
			 Color_Blue, "¡");
		}
	}
}
//
//void Piece::coli_left()
//{
//	flag = 0;
//
//	for (int y = 0; y < BLOCK_HEIGHT; y++) {
//		for (int x = 0; x < BLOCK_WIDTH; x++) {
//			if (block[y][x] != 0) {
//				if (stage[blocky + y][blockx + (x - 1)] != 0) {
//					flag = 1;
//				}
//				else if (block_y_count - (blocky*BLOCK_WIDTH) > 0) {
//					if (stage[blocky + (y + 1)][blockx + (x - 1)] != 0) {
//						flag = 1;
//					}
//				}
//			}
//		}
//	}
//}
//
//void Piece::coli_right()
//{
//	flag = 0;
//
//	for (int y = 0; y < BLOCK_HEIGHT; y++) {
//		for (int x = 0; x < BLOCK_WIDTH; x++) {
//			if (block[y][x] != 0) {
//				if (stage[blocky + y][blockx + (x + 1)] != 0) {
//					flag = 1;
//				}
//				else if (block_y_count - (blocky*BLOCK_WIDTH) > 0) {
//					if (stage[blocky + (y + 1)][blockx + (x + 1)] != 0) {
//						flag = 1;
//					}
//				}
//			}
//		}
//	}
//}

void Piece::coli_bottom()
{
	//flag = 0;

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

	printfDx("%d\n", py);

	//flag = 0;

	//for (int y = 0; y < BLOCK_HEIGHT; y++) {
	//	for (int x = 0; x < BLOCK_WIDTH; x++) {
	//		if (block[y][x] != 0) {
	//			if (stage[blocky + (y + 1)][blockx + x] != 0) {
	//				flag = 1;
	//			}
	//		}
	//	}
	//}
}
void Piece::end()
{

}


