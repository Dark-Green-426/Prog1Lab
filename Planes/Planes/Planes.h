#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Planes
{
private:
	string Name;
	float Long;
	unsigned int Range;
public:
	void Set(string Name, float Long, unsigned int Range);
	void Print(void);
};

