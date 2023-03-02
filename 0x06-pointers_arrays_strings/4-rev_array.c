#include "main.h"

/**
 * reverse_array - This function will print an array in reverse order
 * @a: The array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int t, temp;

	for (t = 0; t < n / 2; ++t)
	{
		temp = a[t];
		a[t] = a[n - t - 1];
		a[n - t - 1] = temp;
	}
}
