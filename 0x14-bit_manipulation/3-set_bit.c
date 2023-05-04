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
    if (i >= sizeof(unsigned long int) * 8)
    {
        return (-1);
    }

    *n |= (1ul << i);

    return (1);
}
