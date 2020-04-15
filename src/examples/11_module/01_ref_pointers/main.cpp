#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
    int r = 0, p = 0;
    int &r_ref = r;
    int* p_ptr = &p; //value of p is 0
    
    cout << "Reference: " << "\n";
    cout << "Address of r: " << &r << "\n"; //reference of r
    cout << "Address of r_ref: " << &r_ref << "\n"; //same address as r
    cout << "Address of r_ref points to: " << &r_ref << ", value reference: " << r_ref << "\n\n";
    
    cout << "Pointer: " << "\n";
    cout << "Address of p: " << &p << "\n"; //referencing the p address
    cout << "Address of p_ptr: " << &p_ptr << "\n"; //pointer has new address
    cout << "Address of p_ptr points to: " << p_ptr << ", value pointed to: " << *p_ptr << "\n\n";
	
	return 0;
}
