//bank_account.cpp
#include "bank_account.h"



void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else 
	{
		//usually write to a file
		throw InvalidAmount("Amount must be greater than 0.");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0.");
	}
	else if(balance - amount < 0)
	{
		throw InvalidAmount("\nInsufficient funds.");
	}
	else
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (balance > 0)
	{
		throw InvalidAmount("Account already open.");
	}
	if (amount >= min_balance_to_open)
	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("A deposit of at least $25 needed.");
	}
}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b) //not part of the class but has to be initialized in the class
{
	std::cout << "Balance is: " << b.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance is: " << b.balance << "\n";
	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount;
	std::cout << "Enter deposit amount: ";
	in >> amount;
	b.deposit(amount);

	return in;
}
