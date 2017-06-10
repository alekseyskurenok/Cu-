#include <iostream>
#include "Point.h"
#include <string>
#include "Student.h"
#include "Triangle.h"
#include "Square.h"

int main()
{
	Point pt;
	Point pt1;
	pt1.setx(37);
	pt1.sety(190);
	pt.setx(25);
	pt.sety(250);
	std::cout << CoincidenceOfPoints(pt, pt1);
	return 0;
}