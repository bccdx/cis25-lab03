#include <iostream>
using namespace std;

int main()
{
	double aMonthly = 9.95;
	double aHoursIncluded = 10;
	double aExtraHoursRate = 2.00;

	double bMonthly = 14.95;
	double bHoursIncluded = 20;
	double bExtraHoursRate = 1.00;

	double cMonthly = 19.95;
	double cHoursIncluded = 744;
	double cExtraHoursRate = 0.00;

	cout << "Packages available:" << endl;
	cout << "Package A: $" << aMonthly << " per month, " << aHoursIncluded << " hours included, $" << aExtraHoursRate << " per additional hour." << endl;
	cout << "Package B: $" << bMonthly << " per month, " << bHoursIncluded << " hours included, $" << bExtraHoursRate << " per additional hour." << endl;
	cout << "Package C: $" << cMonthly << " per month, " << "unlimited hours included." << endl;
	cout << "Select a subscription package (A, B, or C)" << endl;

	string plan;
	cin >> plan;

	// while (!(plan == "A" || plan == "B" || plan == "C" || plan == "a" || plan == "b" || plan == "c"))
	// {
	// 	cout << "Invalid package choice. Please select A, B, or C." << endl;
	// 	cin >> plan;
	// }
	if (!(plan == "A" || plan == "B" || plan == "C" || plan == "a" || plan == "b" || plan == "c"))
	{
		cout << "Invalid package choice. Please run the program again and select A, B, or C." << endl;
		exit(0);
	}

	double hoursUsed;
	cout << "Enter the number of hours used:" << endl;
	cin >> hoursUsed;

	// while (hoursUsed < 0 || hoursUsed > 744)
	// {
	// 	cout << "Invalid number of hours. Please enter a number between 0 and 744." << endl;
	// 	cin >> hoursUsed;
	// }
	if (hoursUsed < 0 || hoursUsed > 744)
	{
		cout << "Invalid number of hours. Please enter a number between 0 and 744." << endl;
		exit(0);
	}

	double total;
	if (plan == "A" || plan == "a")
	{
		total = aMonthly;
		if (hoursUsed > aHoursIncluded)
		{
			total += (hoursUsed - aHoursIncluded) * aExtraHoursRate;
		}
	}
	else if (plan == "B" || plan == "b")
	{
		total = bMonthly;
		if (hoursUsed > bHoursIncluded)
		{
			total += (hoursUsed - bHoursIncluded) * bExtraHoursRate;
		}
	}
	else if (plan == "C" || plan == "c")
	{
		total = cMonthly;
	}

	cout << "Your total amount due is : $" << total << endl;

	return 0;
}