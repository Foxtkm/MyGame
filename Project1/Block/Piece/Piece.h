#ifndef PIECE_H_
#define PIECE_H_
#include"../../DxGraph/Define.h"

//#include "DxLib.h"

class Piece {
public:
	//������
	void initialize();
	//�X�V
	void update();
	//�`��
	void draw();
	//void coli_left();
	//void coli_right();
	//�����̓����蔻��
	void coli_bottom();
	//�I������
	void end();

private:
	//���݂̃s�[�X�̍��W
	int px;	//x���W
	int py;	//y���W

	int block_y_count;

	//�s�[�X�̐F
	int Color_Blue;

	//���s�[�X�̃J�E���^�[
	static const bool nextFlag = true;

	//�����蔻��p
	int flag;

	//�s�[�X�̑傫��(�s�N�Z���P��)
#define PIECE_WIDTH 32

#define BLOCK_WIDTH 4	//�u���b�N�̉�
#define BLOCK_HEIGHT 4	//�u���b�N�̏c

	int block1[BLOCK_HEIGHT][BLOCK_WIDTH];	//4�~4�̔z��

	int block2[BLOCK_HEIGHT][BLOCK_WIDTH];

	//�s�[�X�̌`
	int blocks1[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,0,0 },
	{ 0,1,1,0 },
	{ 0,1,1,0 },
	{ 0,0,0,0 }
	};

	//�s�[�X�̌`
	int blocks2[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,2,0 },
	{ 0,0,2,0 },
	{ 0,2,2,0 },
	{ 0,0,0,0 }
	};

	Define define_;
};
#endif // !PIECE_H_
