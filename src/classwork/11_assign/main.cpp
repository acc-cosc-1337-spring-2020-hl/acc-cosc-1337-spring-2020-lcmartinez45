#include "vector.h"
#include<iostream>
#include <vector>


int main() 
{
    Vector<int> v1(3);
    //v1 = get_vector();
    //v1.Reserve(6);
    for(size_t i = 0; i < v1.Size(); ++i)
    {
        std::cout << v1[i] << "\n";
    }
	
	return 0;
}
