#include "main.h"

/**
 * set_bit - This sets a bit at a specified index
 * @n: Process number
 * @index: the index to the set the bit at
 *
 * Return: 1 (success), -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 54)
		return (-1);

	*n |= (1 << index);

	return (1);
}
