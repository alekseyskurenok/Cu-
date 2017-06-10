#pragma once
class Square
{
	float A;
	float B;
	float C;
	float D;
public:
	Square() {};
	Square(const float NewA, const float NewB, const float NewC, const float NewD) : A(NewA), B(NewB), C(NewC), D(NewD) {};
	Square(const float NewA, const float NewB) : A(NewA), B(NewB) {};
	float getA() const;
	float getB() const;
	float getC() const;
	float getD() const;
	void setA(const float);
	void setB(const float);
	void setC(const float);
	void setD(const float);
	~Square();
};

double TheAreaOfSquare(float A, float B);
double TheAreaOfSquare(float A);

