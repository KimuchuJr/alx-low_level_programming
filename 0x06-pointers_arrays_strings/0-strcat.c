#include "main.h"

/**
 * _strcat - Concatenate two strings in C
 * @src: String to copy
 * @dest: String to be copied
 * Return: Pointer to @dest string result
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
