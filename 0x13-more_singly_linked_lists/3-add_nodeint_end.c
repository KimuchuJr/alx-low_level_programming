#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the list end
 *
 * @header: Head node pointer
 *
 * @n: integer
 *
 * Return: New element address
 *
 */
listint_t *add_nodeint_end(listint_t **header, const int n)
{
	listint_t *nd;
	listint_t *temp = *header;

	nd = malloc(sizeof(listint_t));
	if (!nd)
		return (NULL);
	nd->n = n;
	if (!temp)
	{
		*header = nd;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = nd;
	}
	nd->next = NULL;
	return (nd);
}
