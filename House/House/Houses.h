#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Houses
{
private:
    int room;
    float s;
public:
    Houses(int room, float s);
    Houses();
    void print();
};