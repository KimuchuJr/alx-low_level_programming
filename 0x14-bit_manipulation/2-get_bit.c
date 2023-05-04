#include "main.h"

/**
 * get_bit - A function that gets a specified bit index
 *
 * @num: Number
 * @index: Bit index
 *
 * Return: Bit index value
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;

	return ((num & i) != 0);
}
