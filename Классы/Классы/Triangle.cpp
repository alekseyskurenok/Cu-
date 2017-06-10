#include "Triangle.h"
#include <math.h>

float Triangle::getA() const
{
	return A;
}
float Triangle::getB() const
{
	return B;
}
float Triangle::getC() const
{
	return C;
}
float Triangle::getH() const
{
	return H;
}
float Triangle::getAngular() const
{
	return Angular;
}

void Triangle::setA(const float NewA)
{
	if (NewA > 0)
	{
		A = NewA;
	}
}

void Triangle::setB(const float NewB)
{
	if (NewB > 0)
	{
		B = NewB;
	}
}

void Triangle::setC(const float NewC)
{
	if (NewC > 0)
	{
		C = NewC;
	}
}

void Triangle::setH(const float NewH)
{
	if (NewH > 0)
	{
		H = NewH;
	}
}

void Triangle::setAbgular(const float NewAngular)
{
	if (NewAngular > 0)
	{
		Angular = NewAngular;
	}
}

Triangle::~Triangle()
{
}

double TheAreaOfTriangle(float A, float B, float Angular)
{
	double S = A*B / 2 * sin(Angular);
	return S;
}

double TheAreaOfTriangle(float A, float H)
{
	float S = A*H / 2;
	return S;
}

double TheAreaOfTriangleOnParties(float A, float B,float C)
{
	float p = (A + B + C) / 2;
	double S = sqrt(p*(p - A)*(p - B)*(p - C));
	return S;
}
