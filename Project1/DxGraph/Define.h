#pragma once

static int const WINDOW_WIDTH = 1920;
static int const WINDOW_HEIGHT = 1080;

class Define {
public:
	//フィールドのセル数(横)
#define FIELD_WIDTH 15
//フィールドのセル数(縦)
#define FIELD_HEIGHT 20

//セルのピクセル数
#define CELL_WIDTH 32

	static int stage[FIELD_HEIGHT][FIELD_WIDTH];

	void start() {
		for (int i = 0; i < FIELD_HEIGHT; i++) {
			for (int j = 0; j < FIELD_WIDTH; j++) {
				stage[i][j] = 0;
			}
		}

		int i, j;

		//縦(行)に要素を入れる。今回は"9"
		for (i = 0; i < FIELD_HEIGHT; i++) {
			//横(列)に要素を入れる。今回は"9"
			for (j = 0; j < FIELD_WIDTH; j++) {

				//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(0番目)に"9"を入れる。
				stage[i][0] = 9;
				//FIELD_HEIGHTの行(20番目)に"9"を入れる、,FIELD_WIDTHの列(11個分)に"9"を入れる。
				stage[19][j] = 9;
				//FIELD_HEIGHTの行(20個分)に"9"を入れる、,FIELD_WIDTHの列(11番目)に"9"を入れる。
				stage[i][14] = 9;
			}
		}
	}

};