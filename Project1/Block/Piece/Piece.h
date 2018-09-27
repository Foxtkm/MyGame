#ifndef PIECE_H_
#define PIECE_H_

//#include "DxLib.h"

class Piece {
public:
	void initialize();
	void update();
	void nextPiece();
	void coli_left();
	void coli_right();
	void coli_bottom();
	void y_cout(int block_width,int stage_height);

private:
	//現在のピースの座標
	static int px, py;

	int block_y_count;

	//ピースの加速力
	 int blockx;
	 int blocky;
	//ピースの色
	int Color_Blue;

	//次ピースのカウンター
	static const bool nextFlag = true;

	int flag;

	//ピースの大きさ(ピクセル単位)
#define PIECE_WIDTH 32

#define BLOCK_WIDTH 4
#define BLOCK_HEIGHT 4

	int block[BLOCK_HEIGHT][BLOCK_WIDTH];
	//ピースの形
	int blocks[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,1,0 },
	{ 0,0,1,0 },
	{ 1,1,1,0 },
	{ 0,0,0,0 }
	};
};
#endif // !PIECE_H_
