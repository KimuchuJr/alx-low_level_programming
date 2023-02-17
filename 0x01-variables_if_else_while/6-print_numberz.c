#include <stdio.h>

/**
 * main - Entry point
 * Description: Print number 0 - 9
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((char)n);
	putchar('\n');
	return (0);
}
