#include <iostream>

using std::cout;

int main()
{
    int* ptr_num = new int(5); //declare and acquire new memory (heap)
    
    cout << &ptr_num << "\n"; //displays the address where ptr_num is stored
    
    cout << ptr_num << "\n"; //address where 5 is stored
    
    cout << *ptr_num << "\n\n"; //get value where its pointing to
    
    delete ptr_num; //rule and syntax for pointers
    
    ptr_num = nullptr; //de-reference the pointer to avoid memory leaks
	
	return 0;
}
