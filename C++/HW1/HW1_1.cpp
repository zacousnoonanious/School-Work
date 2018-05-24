#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
srand(time(NULL));
for (int i = 0; i <= 50000; i++)
{
int randInt = (rand() % 6) + 1;
if (randInt == 1)
count1++;
if (randInt == 2)
count2++;
if (randInt == 3)
count3++;
if (randInt == 4)
count4++;
if (randInt == 5)
count5++;
if (randInt == 6)
count6++;

}
cout << "1: " << count1 << " 2: " << count2 << " 3: " << count3 << " 4: " << count4 << " 5: " << count5 << " 6: " << count6 << endl;

}
