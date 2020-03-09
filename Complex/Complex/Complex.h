#pragma once
class Complex
{
private:
	float  Real;
	float Img;
public:
	Complex(const Complex& Obj);
	Complex();
	Complex(float,float);
	void Print();
};

