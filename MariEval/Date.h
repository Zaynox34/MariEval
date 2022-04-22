#pragma once
#include "Month.h"
class Date
{
private:
	unsigned int mDay;
	Month mMonth;
	int mYear;
public:
	Date();
	Date(unsigned int, Month, int);
	int GetDay();
	Month GetMonth();
	int GetYear();
	~Date();
};

