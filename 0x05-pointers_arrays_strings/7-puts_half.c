#include "main.h"

/**
 * puts_half - prints second half of a string
 * Description -print the last n characters where n = (String length - 1) / 2
 * @str :estring to be processed
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
