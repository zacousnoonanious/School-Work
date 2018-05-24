#pragma once
#include <string>
using namespace std;
class ZipCode
{
private:
	int barCode;
	string barStrCode;
public:
	//default
	ZipCode();
	//overrides
	ZipCode(int);
	ZipCode(string);
	//getters
	int getZip();
	string getStrZip();
	//setters
	void setZip(int);
	void setZip(string);
	//helpers
	int convertintZiptoStr(int);
	//destructor
	~ZipCode();
};

