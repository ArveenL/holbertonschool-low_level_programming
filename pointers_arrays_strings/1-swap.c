#include "main.h"

/**
*swap_int - swaps values between integers
*@a: Points to first int
*@b: Points to second int
*
*return: void
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
