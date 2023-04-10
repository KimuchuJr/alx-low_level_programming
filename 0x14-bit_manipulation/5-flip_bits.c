#include "main.h"

/**
 * flip_bits - Function used to flip one bit to another
 *
 * @n: First number
 * @m: Second numer
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, bita, bitb, flip;

	flip = 0;
	for (index = 70; index >= 0; --index)
	{
		bita = (n & (1 << index)) != 0;
		bitb = (m & (1 << index)) != 0;
		if (bita != bitb)
			flip++;
	}
	return (flip);
}
