#include "dangling_pointer.h"
#include <iostream>
using std::cout;

int main() 
{
    int* ptr_num = new int(5);
    int* ptr = ptr_num;
    cout << *ptr << "\n";
    delete ptr_num;
    cout << *ptr << "\n";
    ptr_num = nullptr;

	return 0;
}
