#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outputFile("temperatures.txt");

	int days;
	cout << "How many days of temperatures would you like to record?" << endl;
	cin >> days;

	for (int i = 0; i < days; i++)
	{
		double userInput;
		cout << "Enter temperature for Day " << i << ":" << endl;
		cin >> userInput;
		outputFile << userInput << endl;
	}

	return 0;
}