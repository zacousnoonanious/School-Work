#include "ZipCode.h"
#include <iostream>

//default constructor
ZipCode::ZipCode()
{
	barCode = 0;
}
//overridden constructor
ZipCode::ZipCode(int thisBarCode)
{
	barCode = thisBarCode;
}

ZipCode::ZipCode(string)
{

}


int ZipCode::getZip()
{
	return barCode;
}

string ZipCode::getStrZip()
{
	return barStrCode;
}
void ZipCode::setZip(int thisBarCode)
{
	barCode = thisBarCode;
}

void ZipCode::setZip(string thisStrBarCode)
{
	barStrCode = thisStrBarCode;
}

int ZipCode::convertintZiptoStr(int inputNum)
{

	//couldn't figure out how to convert int to 1/0 string sequence.
	int n1, n2, n3, n4, n5, temp = 0;
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0;
	int v1[5] = {7,4,2,1,0};
		n1 = inputNum % 10; // 4
		inputNum /= 10;
		n2 = inputNum % 10;
		inputNum /= 10;
		n3 = inputNum % 10;
		inputNum /= 10;
		n4 = inputNum % 10;
		inputNum /= 10;
		n5 = inputNum % 10;
		inputNum /= 10;

			if (7 + temp > n4){}
			else { temp = 7; b1 = 1; }
			if (4 + temp >= n3){}
			else { temp = 4; b2 = 1; }
			if (2 + temp > n2){}
			else { temp = 2; b3 = 1; }
			if (1 + temp > n1){}
			else { temp = 1; b4 = 1; }
		std::cout << b1 << b2 << b3 << b4 << b5 << endl;
		std::cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << endl;
		return b1, b2, b3, b4, b4, b5;
}

ZipCode::~ZipCode()
{
}
