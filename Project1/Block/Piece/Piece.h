#ifndef PIECE_H_
#define PIECE_H_
#include"../../DxGraph/Define.h"

//#include "DxLib.h"

class Piece {
public:
	//初期化
	void initialize();
	//更新
	void update();
	//描画
	void draw();
	//void coli_left();
	//void coli_right();
	//下部の当たり判定
	void coli_bottom();
	//終了処理
	void end();

private:
	//現在のピースの座標
	int px;	//x座標
	int py;	//y座標

	int block_y_count;

	//ピースの色
	int Color_Blue;

	//次ピースのカウンター
	static const bool nextFlag = true;

	//当たり判定用
	int flag;

	//ピースの大きさ(ピクセル単位)
#define PIECE_WIDTH 32

#define BLOCK_WIDTH 4	//ブロックの横
#define BLOCK_HEIGHT 4	//ブロックの縦

	int block1[BLOCK_HEIGHT][BLOCK_WIDTH];	//4×4の配列

	int block2[BLOCK_HEIGHT][BLOCK_WIDTH];

	//ピースの形
	int blocks1[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,0,0 },
	{ 0,1,1,0 },
	{ 0,1,1,0 },
	{ 0,0,0,0 }
	};

	//ピースの形
	int blocks2[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,2,0 },
	{ 0,0,2,0 },
	{ 0,2,2,0 },
	{ 0,0,0,0 }
	};

	Define define_;
};
#endif // !PIECE_H_
