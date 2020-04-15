#include "memory_leak.h"

int main() 
{
    //has lots of code
    
	//call function 1 time
    memory_leak(); //allocated memory but didnt delete it

	//call function in a loop
    while (true)                //ex:payroll for walmart, exhaust the memory and itll crash
    {
        memory_leak();
    }
	return 0;
}
