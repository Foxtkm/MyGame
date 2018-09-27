#include "Field.h"
#include "../Texture/TextureID/TextureID.h"
#include<cmath>

Field::Field(const BoundingRectangle & area)
	:area_{area}{
}

void Field::initialize()
{

}

void Field::update()
{
}

void Field::draw() const
{
	
}

bool Field::is_outside(const BoundingRectangle & rect)
{
	return !area_.intersects(rect);
}

const BoundingRectangle & Field::area() const
{
	return area_;
}
