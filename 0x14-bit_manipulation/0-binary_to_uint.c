#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars representing a binary number
 *
 * Return: the converted number, or 0 if invalid input or if the number is too big
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		if (*b == '1')
			num += 1;

		b++;
	}

	return (num);
}


