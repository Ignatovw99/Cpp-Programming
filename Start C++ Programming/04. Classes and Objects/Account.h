// This is the file that declare the class and explains to the compiler what it is
#include <vector>
#include <string>
#include "Transaction.h"

//Never user any namespace in a header file

class Account
{
private:
	int balance;
	int limit;
	std::vector<Transaction> log;

public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	//"Inline" function
	int GetBalance() { return balance; }

};

