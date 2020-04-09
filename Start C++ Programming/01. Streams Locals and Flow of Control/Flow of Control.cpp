#include <iostream>

using namespace std;

int main() 
{
	int i, j;
	for (int loop = 0; loop < 10; loop++)
	{
		cout << loop << " ";
	}

	bool keepGoing = true;
	cout << endl;

	while (keepGoing)
	{
		cout << "Enter first number: ";
		cin >> i;
		cout << "Enter second number: ";
		cin >> j;

		if (i > j)
		{
			cout << "The first is greater";
		}
		else if (i < j)
		{
			cout << "The second is greater";
		}
		else
		{
			cout << "The both numbers are equal";
		}

		cout << endl;
		int k;
		cout << "Do you want to compare another numbers? 0 for no: ";
		cin >> k;
		if (k == 0)
		{
			keepGoing = false;
		}
	}
	return 0;
}