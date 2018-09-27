#ifndef STAGE_H_
#define STAGE_H_
#include"../Block/Piece/Piece.h"

class Stage {

public:
	void initalize();
	void update();
	void draw();
	void make_block();
private:

#define BLOCK_WIDTH 4 
#define BLOCK_HEIGHT 4 

#define CELL_BLOCK 32 

	int block[BLOCK_HEIGHT][BLOCK_WIDTH];

	int blocks[BLOCK_HEIGHT][BLOCK_WIDTH] = {
	{ 0,0,0,0 },
	{ 0,1,1,0 },
	{ 0,1,1,0 },
	{ 0,0,0,0 }
	};

	int block_x;
	int block_y;
	float block_y_count;

	int Color_Red;
	int Color_Green;

	int img1;

	Piece piece_;
};
#endif // !STAGE_H_
