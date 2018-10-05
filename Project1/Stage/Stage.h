#ifndef STAGE_H_
#define STAGE_H_
#include"../Vector/Vector2D/Vector2D.h"

class Stage {

public:
	void initalize();
	void update();
	void draw();
	void make_block();
	void coli_bottom();
	void end();
private:
//
//	//セルのピクセル数
//#define CELL_BLOCK 32 
////フィールドのセル数(横)
//#define FIELD_WIDTH 15
////フィールドのセル数(縦)
//#define FIELD_HEIGHT 20
////
//////セルのピクセル数
////#define CELL_WIDTH 32
//
//#define BLOCK_WIDTH 4	//ブロックの横
//#define BLOCK_HEIGHT 4	//ブロックの縦
//
//	//ステージの描画用
//	int stage[FIELD_HEIGHT][FIELD_WIDTH];
//	//ステージの配列の座標
//	int stage_positionX[FIELD_WIDTH];
//	int stage_positionY[FIELD_HEIGHT];
//
//
//	int block1[BLOCK_HEIGHT][BLOCK_WIDTH];	//4×4の配列
//	int block2[BLOCK_HEIGHT][BLOCK_WIDTH];
//	int block3[BLOCK_HEIGHT][BLOCK_WIDTH];
//
//	int blocks1[BLOCK_HEIGHT][BLOCK_WIDTH] = //ピースの形
//	{
//	{ 0,0,0,0 },
//	{ 0,1,1,0 },
//	{ 0,1,1,0 },
//	{ 0,0,0,0 }
//	};
//
//	int blocks2[BLOCK_HEIGHT][BLOCK_WIDTH] = //ピースの形
//	{
//	{ 0,0,1,0 },
//	{ 0,0,1,0 },
//	{ 0,1,1,0 },
//	{ 0,0,0,0 }
//	};
//
//	int blocks3[BLOCK_HEIGHT][BLOCK_WIDTH] = //ピースの形
//	{
//	{ 1,0,0,1 },
//	{ 1,0,0,1 },
//	{ 1,0,0,1 },
//	{ 1,1,1,1 },
//	};
//
//	int Color_Red;
//	int Color_Green;
//	int Color_Blue;
//
//	//当たり判定用
//	int flag;
//	int flag2;
//	int flag3;
//
//	int img1;
//
//	//現在のピースの座標
//	int px;	//x座標
//	int py;	//y座標
//
//	int px2;	//x座標
//	int py2;	//y座標
//
//	int px3;
//	int py3;
//
//
//	int k;
};
#endif // !STAGE_H_
