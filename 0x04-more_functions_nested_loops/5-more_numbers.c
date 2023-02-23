#include "main.h"

/**
 * more_numbers - print number 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('0' + 1);
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
