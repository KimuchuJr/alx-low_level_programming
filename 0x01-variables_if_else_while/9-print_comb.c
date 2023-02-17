#include <stdio.h>
/**
 * main - Entry point
 * Description: print combination of the numbers 0-9
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 14; num <= 79; num++)
	{
		putchar((char)num);
		if (num != 79)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
