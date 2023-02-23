#include <stdio.h>

/**
 * main - Fizz Buzz Test
 * Description: print Fizz for multiples of 3
 * and Buzz for multiples of 5
 * and FizzBuzz for multiples of both
 * Return: 0 (success)
 */
int main(void)
{
	int f;

	f = 1;
	printf("%d", f);
	for (f = 2; f <= 100; f++)
	{
		printf(" ");
		if (f % 3 == 0 || f % 5 == 0)
		{
			if (f % 3 == 0)
				printf("Fizz");
			if (f % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", f);
		}
	}
	printf("\n");
	return (0);
}
