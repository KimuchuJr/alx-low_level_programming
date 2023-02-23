#include "main.h"

/**
 * print_square - Prints a square
 * @size: Dimensions
 *
 */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 1; d <= size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
