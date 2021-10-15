#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private :
	float fSoThuc;
	float fSoAo;
public:
	void Input();
	void Output();
	SoPhuc Add(SoPhuc sp2);
	SoPhuc Subtract(SoPhuc sp2);
};

