#include "Field.h"
#include "../Texture/TextureID/TextureID.h"
#include<cmath>

Field::Field(const BoundingRectangle & area)
	:area_{area},
	extend_area_{ area.expand({128.0f,128.0f}) }{
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
	return !extend_area_.intersects(rect);
}

const BoundingRectangle & Field::area() const
{
	return area_;
}
