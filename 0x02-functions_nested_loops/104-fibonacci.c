#include <stdio.h>

/**
 * main - start
 * Description: Prints the first 98 numbers of the fibonacci series.
 * Return: (0) - safe exit
 */

int main(void)
{
	int count = 0;
	unsigned long carry, i = 0, j = 1, k, m, n, o;

	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		o = (m + n) - (carry * 1000);
		k = (i + j) + carry;
		m = n;
		n = o;
		i = j;
		j = k;
		if (o >= 100)
		{
			printf("%lu%lu", k, o);
		}
		else
		{
			printf("%lu0%lu", k, o);
		}
		if (count != 98)
		{
			printf(", ");
		}
		count++;
	}
	putchar('\n');
	return (0);
}
