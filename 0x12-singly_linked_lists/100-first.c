#include <stdio.h>
#include "lists.h"

/**
 * print_headf - Function to be executed
 * __attribute__ - Attribute
 * (__constructor__) - Attribute constructor
 */
void __attribute__ ((__constructor__)) print_headf(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
