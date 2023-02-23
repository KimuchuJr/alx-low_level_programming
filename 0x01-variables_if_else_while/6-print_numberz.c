#include <stdio.h>

/**
 * main - Entry point
 * Description: print number 0 to 9
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar((char)num);
	putchar('\n');
	return (0);
}
