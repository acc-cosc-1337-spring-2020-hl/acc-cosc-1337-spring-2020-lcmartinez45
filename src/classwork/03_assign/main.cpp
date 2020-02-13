#include "loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;

	do
	{
		int sum = factorial(5);
		cout << "Result is: " << sum << "\n";

		return 0;

		cout << "\nContinue? 1 for Yes: ";
		cin >> choice;
	} 
	while (choice == 1);
}