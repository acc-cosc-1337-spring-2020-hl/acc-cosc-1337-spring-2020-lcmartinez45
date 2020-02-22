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
		int num;
		cout << "Enter a number: ";
		cin >> num;

		int sum = factorial(num);
		cout << "Result is: " << sum << "\n";

		cout << "\nContinue? 1 for Yes: ";
		cin >> choice;
	} 
	while (choice == 1);

	return 0;
}