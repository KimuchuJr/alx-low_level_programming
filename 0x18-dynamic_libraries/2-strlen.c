#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: char variable to hold the string argument
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen])
		strlen++;
	return (strlen);
}
