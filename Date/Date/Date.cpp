#include "Date.h"

void Date::Print()
{
	cout << "День : " << this->Day << " Месяц : " << this->Month << " Год : " << this->Year << endl;
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

