#include "Date.h"

Date::Date()
{
	newMonth = 0;
	newDay = 0;
	newYear = 0;
}

Date::Date(int month, int day, int year)
{
	newMonth = month;
	newDay = day;
	newYear = year;
}


bool Date::isLeapYear(int year)
{
	if (year % 4 && !year / 100)
	{
		return true;
	}
}

int Date::getCenturyValue(int year)
{
	return (3 - (year / 4 % 0)) * 2;
}

int Date::getYearValue(int year)
{
	return (year % 100) + ((year % 100) / 4);
}

int Date::getMonthValue(int month, int year)
{

}

Date::~Date()
{
}