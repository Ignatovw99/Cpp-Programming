#include "Account.h"

using namespace std;

Account::Account():balance(0), limit(100)
{
}

vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transactions: ");
	for (Transaction transaction : log)
	{
		report.push_back(transaction.Report());
	}
	report.push_back("------------------");

	return report;
}

bool Account::Deposit(int amount)
{
	if (amount >= 0)
	{
		balance += amount;
		log.push_back(Transaction(amount, "Deposit"));
		balance -= 1;
		log.push_back(Transaction(1, "Service Charage"));
		return true;
	}
	else
	{
		return false;
	}
}

bool Account::Withdraw(int amount)
{
	if (amount >= 0)
	{
		if (balance + limit >= amount)
		{
			balance -= amount;
			log.push_back(Transaction(amount, "Withdraw"));
			balance -= 1;
			log.push_back(Transaction(1, "Service Charage"));
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

//int Account::GetBalance()
//{
//	return balance;
//}
