#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(1);

	ifstream inputFile;
	inputFile.open("temperatures.txt");

	double temperature;
	int days = 0;
	double sum = 0;

	while (inputFile >> temperature)
	{
		days++;
		sum += temperature;
	}

	double averageTemperature = sum / days;

	cout << "Temperatures analyzed for " << days << " days." << endl;
	cout << "The average temperature was: " << averageTemperature << endl;

	return 0;
}