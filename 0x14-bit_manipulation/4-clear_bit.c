#include "main.h"

/**
 * clear_bit - Set a bit at specified index
 *
 * @n: Integer pointer
 *
 * @i: Bit index
 *
 * Return: 1 (Success), otherwise -1
 *
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	if (i >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << i);

	return (1);
}

