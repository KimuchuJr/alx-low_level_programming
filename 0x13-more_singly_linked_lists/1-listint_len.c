#include "lists.h"

/**
 * listint_len - Number of elements
 *
 * @h: Head node pointer
 *
 * Return: Number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
