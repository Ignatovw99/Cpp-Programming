#include <iostream>

using namespace std;

int main() 
{
	int answear = 5;
	int guess;
	bool notGuessed = true;

	while (notGuessed)
	{
		cout << "Enter a number: ";
		cin >> guess;

		if (guess > answear)
		{
			cout << "Too high ..." << endl;
		}
		else if (guess < answear)
		{
			cout << "Too low ..." << endl;
		}
		else
		{
			cout << "Conglaturations!!!" << endl;
			notGuessed = false;
		}
	}

	return 0;
}