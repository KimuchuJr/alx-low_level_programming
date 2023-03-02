#include "main.h"

/**
 * _strncpy - This function copies a string
 *@src: The string to copy
 *@dest: The destination of the string to be copied to
 *@n: Number of bytes to copy
 *Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; src[d] != '\0' && d < n; ++d)
	{
		dest[d] = src[d];
	}
	while (d < n)
	{
		dest[d] = 0;
		++d;
	}
	return (dest);
}


