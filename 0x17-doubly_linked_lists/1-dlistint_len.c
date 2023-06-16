#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - calculate the length of a doubly linked list
 *
 * @h: Head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}

	return (length);
}

