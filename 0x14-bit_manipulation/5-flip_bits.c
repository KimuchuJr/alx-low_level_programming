#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip
 * to get from one number to another
 *
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			count++;

		xor >>= 1;
	}

	return (count);
}

