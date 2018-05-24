#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
		int month, day, year;
		cout << "please enter a date in the form xx xx xxxx:";
		cin >> month;
		cin >> day;
		cin >> year;
		Date d1;
		d1(month, day, year) ;
		cout << "Month: " << month << " Day: " << day << " Year: " << year << endl;
	system("pause");
}