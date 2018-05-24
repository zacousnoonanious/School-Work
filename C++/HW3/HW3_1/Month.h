#pragma once
class Month{
private:
	int month;
	string strMonth;
public:
	//Default Constructor
	Month();
	//Overwritten Constructors
	Month(int);
	Month(string);
	//Accessor Functions
	int getMonth();
	string getStrMonth();
	int nextMonth();
	//Mutator Funtions
	void setMonth(int);
	void setStrMonth(string);
	//helper
	void nextMonth(int);
	//Destructor
	~Month();
};