#include "loops.h"
#include<iostream>

using std::cout;

/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorial(int num)
{
	int sum = 0;
	int count = 1;

	while (count <= num) {
		sum = sum * count + count;
		count += 1;
	}
	return sum;
}