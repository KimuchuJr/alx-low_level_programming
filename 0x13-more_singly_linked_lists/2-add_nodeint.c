#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of list
 *
 * @header: Head node pointer
 *
 * @n: Integer
 *
 * Return: Element address
 *
 */
listint_t *add_nodeint(listint_t **header, const int n)
{
	listint_t *nd;

	nd = malloc(sizeof(listint_t));
	if (!nd)
		return (NULL);
	nd->n = n;
	nd->next = *header;
	*header = nd;

	return (nd);
}
