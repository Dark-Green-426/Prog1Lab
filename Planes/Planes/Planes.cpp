
#include "Planes.h"

void Planes::Print()
{
	cout << "Имя : " << this->Name << " Длинна (м) : " << this->Long << " Дальность : " << this->Range << endl;
}

void Planes::Set(string Name, float Long, unsigned int Range)
{
	this->Name = Name;
	this->Long = Long;
	this->Range = Range;
}
