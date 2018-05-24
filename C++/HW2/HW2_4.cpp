#include <iostream>

using namespace std;

int main()
{


	int key = 10;
	char originalCharacter;
	//'R' is 82
	//'o' is 111
	//'$' is 36
	char EncryptedChar[] = {':','m','m','Z','\\','d','x','Z','m','x',']','Z','p','g','y'};
	for (int i = 0; i <= 100; i++)
	{
		cout << "key " << i << ": ";
		for (int j = 0; j <= 15; j++)
		{
			
			if ((EncryptedChar[j]) < 65)
			{
				originalCharacter = EncryptedChar[j] + 7;
			}
			else
			{
				originalCharacter = ((EncryptedChar[j] - i));
			}
			
			cout << originalCharacter;
		}
		
		cout << endl;
	}
	

	system("PAUSE");

//Hey Professor, the message I got was for code 25 which says 'attack at dawn'.

}