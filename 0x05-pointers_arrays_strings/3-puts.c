#include "main.h"

/**
 * _puts - prints a string
 * This is follwed by new line
 * @str: string to be processed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
