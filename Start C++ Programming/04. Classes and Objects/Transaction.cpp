#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amount, string type):amount(amount), type(type)
{
}

string Transaction::Report()
{
	string report;
	report = "    " + type + " " + to_string(amount);
	return report;
}
