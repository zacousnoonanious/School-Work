#include <iostream>
#include <string>
using namespace std;

int menuSelect;
bool yesno = false;
bool addedPlayer = false;
bool playerfound = false;
string playerNameEnter = "";
int playerScoreEnter = 0;
int nameCount = 10;
string playerName[10] = {"Zac", "Alex", "Tom", "Jennifer", "Bill", "Fred", "Abby", "Jim", "Daniel", "Kyle"};
int playerHighScore[10] = {120, 15, 5, 27, 200, 88, 45, 76, 33, 105};
int Menu();
void BubbleSort(int a[], string players[], int n);
int main()
{
	Menu();

}

int Menu()
{
		
		system("cls");
		cout << "What would you like to do? " << endl;
		cout << "------------------------------MAIN MENU------------------------------" << endl;
		cout << "1. Add A New Player" << endl;
		cout << "2. Print Scores To Screen" << endl;
		cout << "3. Find Highest Score Of Particular Player Or Remove Highest Score" << endl;
		cout << "4. Exit The Application" << endl;
		cin >> menuSelect;
		addedPlayer = false;
		if (menuSelect == 1) //adding a new player to the array.
		{
			
			cout << "please enter a player name: ";
			cin >> playerNameEnter;
			cout << "please enter a score for player " << playerNameEnter << " : ";
			cin >> playerScoreEnter;

			for (int i = 0; i < nameCount; i++)
			{
				if (playerHighScore[i] == NULL)
				{
					playerName[i] = playerNameEnter;
					playerHighScore[i] = playerScoreEnter;
					cout << "added player " << playerNameEnter << " with score " << playerScoreEnter << " at index " << i << endl;
					addedPlayer = true;
					nameCount++;
					BubbleSort(playerHighScore, playerName, nameCount);
					system("PAUSE");
					break;
				}
			}
				if (addedPlayer == false)
				{
					cout << "Could not add player " << playerNameEnter << " because all spots are full" << endl;
					system("PAUSE");
				}

		}

		if (menuSelect == 2) //printing score to screen.
		{
			for (int i = nameCount; i >= 0; i--)
			{
				if (playerName[i] == playerNameEnter)
					playerfound = true;
			}
			if (playerfound == false)
			{
				cout << "No players found" << endl;
				system("PAUSE");
			}
			else
			{
				BubbleSort(playerHighScore, playerName, nameCount);
				for (int i = nameCount; i >= 0 ; i--)
				{
					if (playerName[i] != "")
					cout << playerName[i] << " - " << playerHighScore[i] << endl;
				}
				system("PAUSE");
			}
			Menu();
		}

		if (menuSelect == 3) //find and/or remove highest player score.
		{
			cout << "Please enter the name of the player: ";
			cin >> playerNameEnter;
			for (int i = nameCount; i >= 0; i--)
			{
				if (playerName[i] == playerNameEnter && playerNameEnter != "")
				{
					cout << "found something" << endl;
					cout << playerName[i] << " - " << playerHighScore[i] << endl;
					cout << "would you like to remove this score?(enter '1' for yes or '0' for no): ";
					cin >> yesno;
					if (yesno)
					{
						playerName[i] = "";
						playerHighScore[i] = NULL;
						nameCount--;
					}
					
				}

			}
			
		}

		if (menuSelect == 4) //exit application.
			return 0;


		Menu();
}

void swap(int xscore[], int y) //swap for scores
{
		int swap = xscore[y];
		xscore[y] = xscore[y + 1];
		xscore[y + 1] = swap;
}

void BubbleSort(int a[], string players[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				swap(players[j], players[j + 1]);
			}
		}
	}
}