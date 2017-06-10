#include "Square.h"
#include <math.h>

float Square::getA() const
{
	return A;
}

float Square::getB() const
{
	return B;
}

float Square::getC() const
{
	return C;
}

float Square::getD() const
{
	return D;
}

void Square::setA(const float NewA)
{
	if (NewA > 0)
	{
		A = NewA;
	}
}

void Square::setB(const float NewB)
{
	if (NewB > 0)
	{
		B = NewB;
	}
}

void Square::setC(const float NewC)
{
	if (NewC > 0)
	{
		C = NewC;
	}
}

void Square::setD(const float NewD)
{
	if (NewD > 0)
	{
		D = NewD;
	}
}

double TheAreaOfSquare(float A, float B)
{
	if (A = B)
	{
		double S = pow(A, 2);
		return S;
	}
	else
	{
		double S = A*B;
		return S;
	}
}

double TheAreaOfSquare(float A)
{
	double S = pow(A, 2);
	return S;
}

Square::~Square()
{
}
