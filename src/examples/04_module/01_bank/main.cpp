#include "bank_account.h"
#include<iostream>
#include<vector>

using std::cout; using std::cin; using std::vector;

int main()
{
	BankAccount a(50), b(60);
							//BankAccount c = a + b;
	display_balance(a);
	cout << a;
	cin >> a;
	display_balance(a);

	vector<BankAccount> accounts{ BankAccount(100), BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}

	BankAccount account(500);
	int balance = account.get_balance();
	cout << "\nBalance: " << balance;
	try
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout << e.get_message();
	}
	return 0;
}