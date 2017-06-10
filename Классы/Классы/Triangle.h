#pragma once
class Triangle
{
	float A;
	float B;
	float C;
	float H;
	float Angular;
public:
	Triangle() {};
	Triangle(const float NewA, const float NewB, const float NewC, const float NewAngular,const float NewH) :A(NewA), B(NewB), C(NewC), Angular(NewAngular), H(NewH) {};
	Triangle(const float NewA, const float NewB, const float NewC) :A(NewA), B(NewB), C(NewC) {};
	Triangle(const float NewA, const float NewH) :A(NewA), H(NewH) {};
	float getA() const;
	float getB() const;
	float getC() const;
	float getH() const;
	float getAngular() const;
	void setA(const float);
	void setB(const float);
	void setC(const float);
	void setH(const float);
	void setAbgular(const float);
	~Triangle();
};


double TheAreaOfTriangle(float A, float B, float Angular);
double TheAreaOfTriangle(float A, float H);
double TheAreaOfTriangleOnParties(float A, float B,float C);

