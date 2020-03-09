#include <time.h>
#include <ctime>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

class Date
{
private:
	int Day;
	int Month;
	int Year;
public:
	void Set(int,int,int);
	void Print(void);
	Date();
};
