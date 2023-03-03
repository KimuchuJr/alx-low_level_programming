#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This fxn generates random passwords for 101-crackme
 * Return: (0) - safe exit
 */

int main(void)
{
	int random = 0, sum = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (sum <= 2772)
	{
		random = rand() % 128;
		if ((sum + random) > 2772)
		{
			break;
		}
		sum += random;
		putchar(random);
	}
	putchar(2772 - sum);
	return (0);
}
