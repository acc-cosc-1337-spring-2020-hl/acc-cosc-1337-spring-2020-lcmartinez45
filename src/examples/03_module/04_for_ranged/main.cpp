#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	string str = "lilly";

	loop_string_w_index(str);

	loop_string_w_auto(str);

	return 0;
}