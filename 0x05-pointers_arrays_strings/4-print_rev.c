#include "main.h"

/**
 * print_rev - prints the string in reverse,
 * This is followed by a new line
 * @s : string to be processed
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
