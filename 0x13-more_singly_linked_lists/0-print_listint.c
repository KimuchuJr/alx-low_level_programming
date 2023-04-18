#include "lists.h"

/**
 * print_listint - Prints elements in a list
 *
 * @c: Head node pointer
 *
 * Return: Nodes number
 *
 */
size_t print_listint(const listint_t *c)
{
	size_t cnt;

	cnt = 0;

	while (c)
	{
		printf("%d\n", c->n);

		c = c->next;

		cnt++;
	}
	return (cnt);
}
