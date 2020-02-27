#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount get_balance") {

}

TEST_CASE("Test BankAccount deposit") {
	REQUIRE(account.get_balance() == 150);
	REQUIRE_THROWS_AS(account.deposit(-50).InvalidAmount);

	REQUIRE(account.get_balance == 150);
	account.deposit(50);
}

TEST_CASE("Test BankAccount withdraw") {
	BankAccount account(150)
	REQUIRE_THROWS_AS(account.withdraw(-5), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.withdraw(101), InvalidAmount);
	REQUIRE(account.get_balance() == 100);

}