#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	cout << "Address for num is: " << &num; //Holds actual reference from stack for that num

	int &num_ref = num;
	num_ref = 10;

	cout << "\nNum is: " << num; //Reference num to a new num which we changed to 10


	return 0;
}