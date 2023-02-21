#include "main.h"

/**
 * _isalpha - check if input is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
