#include "ref_pointers.h"


void ref_point(int& int1, int* int2)
{
    int1 = 100;
    *int2 = 66; //point to int, int2 change the value it points to
}
