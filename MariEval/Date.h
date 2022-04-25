#pragma once
#include <string>
#include "Month.h"
class Date
{
private:
	unsigned int mDay;
	Month mMonth;
	int mYear;
public:
	Date();
	std::string to_string();
	Date(unsigned int, Month, int);
	int GetDay();
	Month GetMonth();
	int GetYear();
	~Date();
};

