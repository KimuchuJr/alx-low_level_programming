#include "main.h"

/**
 * print_binary - Number binary representation
 *
 * @n: Index to be converted
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int d;
	int f, s;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	f = 0;
	s = (sizeof(n) * 4) - 2;
	for (d = (1 << s); d > 0; d >>= 1)
	{
		if ((n & d))
		{
			if (!f)
				f = 1;
			_putchar('1');
		}
		else if (f)
		{
			_putchar('0');
		}
	}
}
