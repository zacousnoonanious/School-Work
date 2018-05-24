#include "Month.h"
#include <iostream>
#include <string>
//#include "Month.h"
using namespace std;





int main()
{
	Month m1;
	Month m2(1);
	Month m3("Apr");
	Month m4 = m3.nextMonth();

	cout << m1.getMonth() << endl;		// Outputs 1
	cout << m2.getStrMonth() << endl;		// Outputs Mar
	cout << m3.getMonth() << endl;		// Outputs 4
	cout << m4.getStrMonth() << endl;		// Outputs May

	system("pause");
}