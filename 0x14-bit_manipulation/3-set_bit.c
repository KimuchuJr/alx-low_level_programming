#include "main.h"

/**
 * set_bit - Bit set at an index
 *
 * @n: Number
 * @i: Index
 *
 * Return: 1 (Success), -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int i)
{
	if (i > 63)
		return (-1);

	*n |= (1 << i);

	return (1);
}
