
#include "Planes.h"

void Planes::Print()
{
	cout << "��� : " << this->Name << " ������ (�) : " << this->Long << " ��������� : " << this->Range << endl;
}

void Planes::Set(string Name, float Long, unsigned int Range)
{
	this->Name = Name;
	this->Long = Long;
	this->Range = Range;
}
