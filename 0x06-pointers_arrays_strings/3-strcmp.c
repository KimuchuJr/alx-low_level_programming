#include "main.h"

/**
 * _strcmp - A function used to compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: Comparison of strings
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; ++s1, ++s2)
		if (*s1 != *s2)
			return (*s1 - *s2);
	if (*s1 != '\0')
		return (*s1);
	else if (*s2 != '\0')
		return (*s2);
	return (0);
}
