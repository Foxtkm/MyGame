#ifndef STAGE_H_
#define STAGE_H_

class Stage {

public:
	void initalize();
	void update();
	void draw();
	void make_block();
	void coli_bottom();
	void end();
private:

//�Z���̃s�N�Z����
#define CELL_BLOCK 32 
//�t�B�[���h�̃Z����(��)
#define FIELD_WIDTH 15
//�t�B�[���h�̃Z����(�c)
#define FIELD_HEIGHT 20
//
////�Z���̃s�N�Z����
//#define CELL_WIDTH 32

#define BLOCK_WIDTH 4	//�u���b�N�̉�
#define BLOCK_HEIGHT 4	//�u���b�N�̏c


    int stage[FIELD_HEIGHT][FIELD_WIDTH];

	int block1[BLOCK_HEIGHT][BLOCK_WIDTH];	//4�~4�̔z��
	int block2[BLOCK_HEIGHT][BLOCK_WIDTH];


	int blocks1[BLOCK_HEIGHT][BLOCK_WIDTH] = //�s�[�X�̌`
	{
	{ 0,0,0,0 },
	{ 0,1,1,0 },
	{ 0,1,1,0 },
	{ 0,0,0,0 }
	};

	int blocks2[BLOCK_HEIGHT][BLOCK_WIDTH] = //�s�[�X�̌`
	{
	{ 0,0,1,0 },
	{ 0,0,1,0 },
	{ 0,1,1,0 },
	{ 0,0,0,0 }
	};

	int Color_Red;
	int Color_Green;
	int Color_Blue;

	//�����蔻��p
	int flag;
	int flag2;

	int img1;

	//���݂̃s�[�X�̍��W
	int px;	//x���W
	int py;	//y���W

	int px2;	//x���W
	int py2;	//y���W
};
#endif // !STAGE_H_
