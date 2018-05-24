#include <iostream>
using namespace std;

int main()
{
	int num;
	int a[10] = { 0 };

	cout << "How many numbers? (max of 10)" << endl;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i << endl;
		cin >> a[i];
	}
	// Output the numbers entered
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl; 
	
	
	// The problem is because the array can only hande 10 elements. Since C++ only assigns what it 
	// needs to in storage when the array is declared, when the for loop < num is true we're 
	// fine, but since we allow the user to input a number that is any size, the for loop will run until that condition
	// becomes false. Further down, the other for loop will output the max of index a[10], but there's much more tacked on
	// to this array now. When the last element is output to the console, the compiler realizes there's more in the array, but it
	// won't be able to access it. This is why we get a repetition of the last element it was able to access until the first for loop is finished.

	//A fight might be: An if statement that checks to see if the number the user entered is less than 10.


	system("PAUSE");
	return 0;
	
}
