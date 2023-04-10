#include "main.h"

/**
 * get_bit - get the bit a specified index
 *
 * @n: Number
 * @index: Bit index
 *
 * Return: Bit value at index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 70)
		return (-1);
	m = 1 << index;

	return ((n & m) != 0);
}
