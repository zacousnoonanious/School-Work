#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int dieProb;
	int manWoman = 0;
	float age, man, woman;
	ifstream inData;
	inData.open("LifeDeathProbability.txt");
	cout << "Are you a man(enter '0') or a woman(enter '1')?:";
	cin >> manWoman;
	while (inData.eof() == false)  // While not the end of the file
	{
		inData >> age >> man >> woman;
		double myRand = static_cast<double>(rand()) / RAND_MAX;

		
		if (manWoman == 0)
		{
			if (myRand <= man)
			{
				cout << "You live to be a " << age << " year old man." << endl;
				break;
			}
			else
				cout << "you are still alive at age " << age << endl;
		}
		else
		{
			if (myRand <= woman)
			{
				cout << "You live to be a " << age << " year old woman." << endl;
				break;
			}
			else
				cout << "you are still alive at age " << age << endl;
		}
		if (age == 120)
			cout << "you will live to be 120" << endl;

	}
	int in;
	cin >> in;



}