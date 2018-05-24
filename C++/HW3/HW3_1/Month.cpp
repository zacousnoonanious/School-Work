#include "Month.h"
#include <string>
using namespace std;
//default
Month::Month(){
	month = 1;
	strMonth = "Jan";
}
//overridden
Month::Month(int newMonth){
	month = newMonth;
}
Month::Month(string newStrMonth)
{
	strMonth = newStrMonth;
}
//accessor
int Month::getMonth(){
	if (strMonth == "Jan") setMonth(1);
	if (strMonth == "Feb") setMonth(2);
	if (strMonth == "Mar") setMonth(3);
	if (strMonth == "Apr") setMonth(4);
	if (strMonth == "May") setMonth(5);
	if (strMonth == "Jun") setMonth(6);
	if (strMonth == "Jul") setMonth(7);
	if (strMonth == "Aug") setMonth(8);
	if (strMonth == "Sep") setMonth(9);
	if (strMonth == "Oct") setMonth(10);
	if (strMonth == "Nov") setMonth(11);
	if (strMonth == "Dec") setMonth(12);
	return month;
};
string Month::getStrMonth(){
	if (month == 1) strMonth = "Jan";
	if (month == 2) strMonth = "Feb";
	if (month == 3) strMonth = "Mar";
	if (month == 4) strMonth = "Apr";
	if (month == 5) strMonth = "May";
	if (month == 6) strMonth = "Jun";
	if (month == 7) strMonth = "Jul";
	if (month == 8) strMonth = "Aug";
	if (month == 9) strMonth = "Sep";
	if (month == 10) strMonth = "Oct";
	if (month == 11) strMonth = "Nov";
	if (month == 12) strMonth = "Dec";
	return strMonth;
}

int Month::nextMonth()
{

}
//mutator
void Month::setMonth(int thismonth){
	month = thismonth;
}
void Month::setStrMonth(string thisStrMonth){
	strMonth = thisStrMonth;
}
void Month::nextMonth(int thisStrNextMonth){
	strMonth = thisStrNextMonth++;
}
//helper


Month::~Month(){};