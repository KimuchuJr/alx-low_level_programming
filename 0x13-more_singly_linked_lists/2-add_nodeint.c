#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of list
 *
 * @header: Head node pointer
 *
 * @b: Integer
 *
 * Return: Element address
 *
 */
listint_t *add_nodeint(listint_t **header, const int b)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->b = b;
	node->next = *header;
	*header = node;

	return (node);
}
