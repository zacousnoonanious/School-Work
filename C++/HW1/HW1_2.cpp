#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool seed = 0;
int playerScore = 0;
int tempplayerScore = 0;
int computerScore = 0;
int tempcomputerScore = 0;
char playerSelect = 'r';
int HumanPlayer();
int ComputerPlayer();

int main()
{
	HumanPlayer();
}

int HumanPlayer()
{
	cout << "---HUMAN PLAYER'S TURN---" << endl;
	cout << "current player score is " << playerScore << endl;
	if (seed = 0)
		srand(time(NULL));
	seed = 1;
	int randomRoll = (rand() % 6) + 1;
	cout << "Human player dice roll was a " << randomRoll << endl;
	if (randomRoll == 1)
	{
		tempplayerScore = 0;
		cout << "Ending human player turn..." << endl;
		ComputerPlayer();
	}
	else
	{
		cout << "would you like to roll again(r) or hold(h)?:";
		cin >> playerSelect;
		if (playerSelect == 'r')
		{
			cout << "Rolling again..." << endl;
			tempplayerScore += randomRoll;
			main();
		}
		else if (playerSelect == 'h')
		{
			playerScore += tempplayerScore + randomRoll;
			randomRoll = 0;
			tempplayerScore = 0;
			cout << "current player score is " << playerScore << endl;
			cout << "Ending human player turn..." << endl;
			if (playerScore < 100)
				ComputerPlayer();
			else
				cout << "Human player has won with " << playerScore << "points!" << endl;
		}

	}

	tempplayerScore = 0;
	return 0;
}


int ComputerPlayer()
{
	cout << "---COMPUTER PLAYER'S TURN---" << endl;
	tempcomputerScore = 0;

	while (tempcomputerScore < 20)
	{
		int randomRoll = (rand() % 6) + 1;
		cout << "Computer player dice roll was a " << randomRoll << endl;
		tempcomputerScore += randomRoll;
	}
	cout << "computer player has accumulated 20 or more points this round..." << "\n" << "Ending computer player turn with " << tempcomputerScore << "points." << endl;
	computerScore += tempcomputerScore;
cout << "computer player total score: " << computerScore << endl;
if (computerScore >= 100)
cout << "Computer player has won this round." << endl;
else
HumanPlayer();

	return 0;
}
