#include "Date.h"
using namespace std;
Date::Date()
{
	mDay = 1;
	mMonth = Month::January;
	mYear = -322;
}
string Date::to_string()
{
	string tmp;
	switch (mMonth) {
	case Month::January:
		tmp = "January";
		break;
	case Month::February:
		tmp = "February";
		break;
	case Month::March:
		tmp = "March";
		break;
	case Month::April:
		tmp = "April";
		break;
	case Month::May:
		tmp = "May";
		break;
	case Month::June:
		tmp = "June";
		break;
	case Month::July:
		tmp = "July";
		break;
	case Month::August:
		tmp = "August";
		break;
	case Month::September:
		tmp = "September";
		break;
	case Month::October:
		tmp = "October";
		break;
	case Month::November:
		tmp = "November";
		break;
	case Month::December:
		tmp = "December";
		break;
	default:
		tmp = "Zacember";
	}
	return tmp+" "+std::to_string(mDay)+", "+ std::to_string(mYear);
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
