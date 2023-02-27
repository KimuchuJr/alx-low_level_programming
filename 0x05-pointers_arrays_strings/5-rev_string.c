#include "main.h"

/**
 * rev_string - reverses the string
 * str - string to be processed
 */
void rev_string(char *str)
{
	int i, len;
	char temp;

	len = _strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

/**
 * _strlen - determine string length
 * @str - string to be processed
 * Return: String length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
