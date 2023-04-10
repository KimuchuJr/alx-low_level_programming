#include <stdio.h>
#include "lists.h"

/**
 * list_len - Length of a linked list
 *
 * @h: Head node pointer
 *
 * Return: List length
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
