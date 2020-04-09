#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, secondName;

	bool haveSameLength = false;

	while (!haveSameLength)
	{
		cout << "Enter the first name: ";
		getline(cin, firstName);
		cout << "Enter the second name: ";
		getline(cin, secondName);

		//cin >> firstName;
		//getline(cin, secondName); // The getline will get the new line of the previous operation from cin

		int fisrtNameLength = firstName.length();
		int secondNameLength = secondName.length();
		if (fisrtNameLength > secondNameLength)
		{
			cout << "The first one is longer";
		}
		else if (secondNameLength > fisrtNameLength)
		{
			cout << "The second one is longer";
		}
		else
		{
			cout << "The both have the same length";
			haveSameLength = true;
		}
		cout << endl;
	}

	return 0;
}