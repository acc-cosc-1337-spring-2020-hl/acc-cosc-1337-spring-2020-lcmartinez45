#include "bank_account.h"
//checking_account.h

class CheckingAccount : public BankAccount
{
public:
	//sending the balance to the BankAccount
	//through the BankAccount constructor
	//initializes BankAccount private balance
	CheckingAccount() = default;
	explicit CheckingAccount(int b) : BankAccount(b) {}
	int get_balance()const { return balance * (1 + get_rate()); }

};