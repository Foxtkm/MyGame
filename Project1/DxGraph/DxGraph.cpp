#include "DxGraph.h"
#include <math.h>
#include "../Texture/TextureID/TextureID.h"
#include"DxLib.h"

void DxGraph::load(char *filename)
{
	handle = LoadGraph(filename);
}

DxGraph::~DxGraph()
{
	DeleteGraph(handle);
}

int DxGraph::draw(float x, float y, float width, float height)
{
	return DrawExtendGraph(x,y,x+width,y+height,handle,true);
}

