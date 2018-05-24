#include <iostream>
using namespace std;
void changedispensed(int change, int &quarters, int &dimes, int &nickels, int &pennies);

void changedispensed(int change, int &quarters, int &dimes, int &nickels, int &pennies)
{ // 62
	quarters = (change / 25);
	int remainder = change - (quarters * 25);
	dimes = (remainder / 10);
	remainder = remainder - (dimes * 10);
	nickels = (remainder / 5);
	remainder = remainder - (nickels * 5);
	pennies = remainder;
}

int main()
{
	int change, quarters, dimes, nickels, pennies;
	cout << "please enter an integer between 1 and 99: ";
	cin >> change;
	changedispensed(change, quarters, dimes, nickels, pennies);
	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies  << " pennies are needed to make change for " << change << " cents." << endl;
}

