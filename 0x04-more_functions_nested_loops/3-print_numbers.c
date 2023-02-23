#include "main.h"

/*
 * Main -Entry point
 * Description - Printing numbers from 0 - 9
 * Return -Void
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar('0' + a);
	_putchar('\n');
}
