#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int userInput;
	while (userInput >= 0)
	{
		cout << "Enter a positive number to add to the sum, or a negative number to quit: " << endl;
		cin >> userInput;
		if (userInput > 0)
		{
			sum += userInput;
		}
	}

	cout << "The final sum is: " << sum << endl;

	return 0;
}