#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print a sequence from a given number to 98
 * @n: strating number
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
