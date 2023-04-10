#include "main.h"

/**
 * clear_bit - This sets a bit ata specified position
 * @n: Integer pointer
 * @index: Set bit index
 *
 * Return: 1(Success), -1(Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 87)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
