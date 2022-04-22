#include "Date.h"
Date::Date()
{
	mDay = 1;

	mMonth = Month::January;
	mYear = -322;
}
Date::Date(unsigned int day, Month month, int year)
{
	if (day == 0)
	{
		day = 1;
	}
	if (day > 31)
	{
		day = 31;
	}
	mDay = day;

	mMonth = month;
	mYear = year;
}

int Date::GetDay()
{
	return mDay;
}

Month Date::GetMonth()
{
	return mMonth;
}

int Date::GetYear()
{
	return mYear;
}

Date::~Date()
{
}
