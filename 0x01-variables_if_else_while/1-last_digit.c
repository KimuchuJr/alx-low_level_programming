#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - Entry point of our code
 *Description -  Print the last digit
 *Return 0 (success)
 */

int main(void)
{
	int n;
	int Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdigit = n % 10;
	printf("Last digit of %d is %d and is ", n, Lastdigit);
	if (Lastdigit > 5)
		printf("greater than 5\n");
	else if (Lastdigit == 0)
		printf("0\n");
	else
		printf("less than 6 but not 0\n");
	return (0);
}
