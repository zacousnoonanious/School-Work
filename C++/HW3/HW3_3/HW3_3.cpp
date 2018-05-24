#include "ZipCode.h"
#include <iostream>
using namespace std;

int main()
{
	ZipCode z1, z2;
	z1.setZip(99503);
	z1.convertintZiptoStr(99504);
	cout << z1.getZip() << endl;
	z2.setZip("10010101011");
	cout << z2.getStrZip();
	system("pause");
}