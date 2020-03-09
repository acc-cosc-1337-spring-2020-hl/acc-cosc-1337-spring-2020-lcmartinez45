#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount get_balance") {
	CheckingAccount account(150);

	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test BankAccount deposit") 
{
	BankAccount account(150);

	REQUIRE(account.get_balance() == 150);
	REQUIRE_THROWS_AS(account.deposit(-50), InvalidAmount);

	REQUIRE(account.get_balance() == 150);
	account.deposit(50);
}

TEST_CASE("Test BankAccount withdraw") {
	BankAccount account(150);

	REQUIRE_THROWS_AS(account.withdraw(-5), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.withdraw(101), InvalidAmount);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test default constructor for balance eq 0")
{
	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test default constructor open account")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.open(25);
	REQUIRE(account.get_balance() == 25);

}
TEST_CASE("Test default constructor account already open")
{
	BankAccount account(50);
	REQUIRE_THROWS_AS(account.open(25), InvalidAmount);
}
TEST_CASE("Test default constructor open account with less than $25")
{
	BankAccount account;
	REQUIRE_THROWS_AS(account.open(24), InvalidAmount);
}

TEST_CASE("Test BankAccount get rate function")
{
	BankAccount account(50);

	REQUIRE(account.get_rate() == .025);
}