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
	//���݂̃s�[�X�̍��W
	static int px, py;

	int block_y_count;

	//�s�[�X�̉�����
	 int blockx;
	 int blocky;
	//�s�[�X�̐F
	int Color_Blue;

	//���s�[�X�̃J�E���^�[
	static const bool nextFlag = true;

	int flag;

	//�s�[�X�̑傫��(�s�N�Z���P��)
#define PIECE_WIDTH 32

#define BLOCK_WIDTH 4
#define BLOCK_HEIGHT 4

	int block[BLOCK_HEIGHT][BLOCK_WIDTH];
	//�s�[�X�̌`
	int blocks[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,1,0 },
	{ 0,0,1,0 },
	{ 1,1,1,0 },
	{ 0,0,0,0 }
	};
};
#endif // !PIECE_H_
