#include "main.h"

/**
 * print_most_numbers - print the number from 0 - 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2)
	if (i != 4)
		_putchar(i);
	}
	_putchar('\n');
}
