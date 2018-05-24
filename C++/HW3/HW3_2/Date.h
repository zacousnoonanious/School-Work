#pragma once
#include <iostream>
class Date
{
private:
	int newMonth;
	int newDay;
	int newYear;

public:
	Date();
	Date(int, int, int);
	~Date();

	bool isLeapYear(int year);
	int getCenturyValue(int year);
	int getYearValue(int year);
	int getMonthValue(int month, int year);
};