#include <iostream>
using namespace std;
int maxPidgeotto = 0;
int maxPidgy = 0;
int xp = 0;
int candy = 0;
int pidgy = 0;
int pidgeotto = 0;
int evolveQuantity = 0;
int evolvecandyBack = 0;
int pidgypidgeottotoCandy = 0;
int evolvecandyCost = 12;
int evoxpGain = 500;
int main()
{
	cout << "Please input number of candies you have: ";
	cin >> candy;
	cout << "Please input number of pidgeys you have: ";
	cin >> pidgy;
	while ((candy + pidgy + pidgeotto >= 12))
	{
		for (int i = 0; i < (candy + pidgy);)
		{
			if (((candy + i) % 12) == 0)
			{
				maxPidgy = i;
				break;
			}
			else
				i++;
		}
		candy += maxPidgy;
		if (pidgy > 0)
		pidgy -= maxPidgy;
		cout << "pidgy exchange to candy needed for next evolve: " << maxPidgy << endl;
		cout << "candy: " << candy << endl;
		cout << "pidgys you currently have: " << pidgy << endl;
		
		evolveQuantity = candy / evolvecandyCost;
		cout << "can afford " << evolveQuantity << " evolves." << endl;
		xp += evolveQuantity * evoxpGain;
		candy -= (evolveQuantity * evolvecandyCost);
		candy += evolveQuantity;
		cout << "Gained " << evolveQuantity << " candie from the evolve process." << endl;
		pidgeotto += evolveQuantity;
		pidgy = pidgy - evolveQuantity;
		if (pidgy >= 0)
		//a side note: I realize this sometimes outputs a negative pidgy. The end result should be the same, as x + y > z.
		cout << "candy: " << candy << " pidgey: " << pidgy << " pidgeoto: " << pidgeotto << endl;
	}
		cout << "Player xp has increased to " << xp << endl;
		cout << "No further action can be taken." << endl;
}