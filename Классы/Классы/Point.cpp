#include "Point.h"

float Point::getx() const
{
	return x;
}

float Point::gety() const 
{
	return y;
}

void Point::sety(const float newy)
{
	y = newy;
}

void Point::setx(const float newx)
{
	x = newx;
}

bool CoincidenceOfPoints(Point pt, Point pt1)
{
	if ((pt.getx() != pt1.getx()) && (pt.gety() != pt1.gety()))
	{
		return true;
	}
	return false;
}