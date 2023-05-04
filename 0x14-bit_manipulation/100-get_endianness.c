#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check the endianness of the machine
 *
 * Return: 1 if the machine is little endian, 0 if it's big endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *d = (char *)&n;
	int little_endian = (*d == 1);

	return (little_endian);
}

