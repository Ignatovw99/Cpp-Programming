#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //for sort and count

using namespace std;

int main()
{
	vector<int> vector_int;
	for (int i = 0; i < 10; i++)
	{
		vector_int.push_back(i);
	}

	for (int item : vector_int)
	{
		cout << item << " ";
	}

	cout << endl;

	cout << "Enter three words: ";

	vector<string> vector_string;
	
	for (int i = 0; i < 3; i++)
	{
		string str;
		cin >> str;
		vector_string.push_back(str);
	}

	for (string item : vector_string)
	{
		cout << item << " ";
	}

	cout << endl;

	cout << "int vector vector_int has " << vector_int.size() << " elements" << endl;

	vector_int[5] = 3;
	vector_int[6] = -1;

	for (int item : vector_int)
	{
		cout << item << " ";
	}

	cout << endl;

	for (unsigned int i = 0; i < vector_int.size(); i++)
	{
		cout << vector_int[i] << " ";
	}

	cout << endl;

	//Iterator
	for (vector<int>::iterator i = begin(vector_int); i != end(vector_int); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	sort(begin(vector_string), end(vector_string));

	for (string item : vector_string)
	{
		cout << item << " ";
	}
	cout << endl;

	int threes = count(begin(vector_int), end(vector_int), 3);
	cout << "vector of ints has " << threes << " elements with value 3" << endl;

	//String is a collection of characters

	int tees = count(begin(vector_string[0]), end(vector_string[0]), 't');
	cout << "vector strings has " << tees << " letter t's" << endl;

	return 0;
}