#include "main.h"

/**
 * print_rev - prints the string in reverse
 * This is followed by a new line
 * @str - string to be processed
 */
void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	_putchar('\n');
}
