#include "Complex.h"
#include "Header.h"

Complex::Complex() :Real(0), Img(0)
{
}

Complex::Complex(float pReal, float pImg) : Real(pReal), Img(pImg)
{
}

void Complex::Print() 
{
	cout << "Real : " << this->Real << endl;
	cout << "Img : " << this->Img << endl;
}