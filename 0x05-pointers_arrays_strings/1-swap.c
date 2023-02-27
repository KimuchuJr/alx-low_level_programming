#include "main.h"

/**
 * swap_int is used to swap the values of two integers
 * a - pointer to first integer
 * b - pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
