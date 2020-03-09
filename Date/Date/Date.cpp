#include "Date.h"

void Date::Print()
{
	cout << "���� : " << this->Day << " ����� : " << this->Month << " ��� : " << this->Year << endl;
}

void Date::Set(int Day, int Month, int Year)
{
	this->Day = Day;
	this->Month=Month;
	this->Year=Year;
}

Date::Date() 
{
	struct tm* tk;
	time_t t = time(NULL);
	localtime_s(tk,&t);
	this->Year = tk->tm_year + 1900;
	this->Month = tk->tm_mon + 1;
	this->Day = tk->tm_mday;
}

