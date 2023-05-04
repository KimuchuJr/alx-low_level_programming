#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 *
 * @d: Index to be converted
 *
 * Return: Result
 */

unsigned int binary_to_uint(const char *d)
{
	unsigned int outcm = 0;
	unsigned int bit = 1;
	int i;

	if (d == NULL)
	{
		return (0);
	}

	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] == '1')
		{
			outcm += bit;
		}
		else if (d[i] != '0')
		{
			return (0);
		}
		bit <<= 1;
	}

	return (outcm);
}

