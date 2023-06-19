#include "main.h"

/**
 * _strncat - This will concatenate two strings by using n bytes from c
 * @src: String to be copied
 * @dest: Destination of the copied string
 * @n: number of bytes copied
 * Return: Result of copying in @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		++a;
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		++a;
		++b;
	}
	return (dest);
}
