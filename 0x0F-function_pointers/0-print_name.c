#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: Name of the person
 * @f: Pointer to function
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
