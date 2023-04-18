#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Head node remover
 *
 * @header: Head node pointer
 *
 * Return: Head node data
 */
int pop_listint(listint_t **header)
{
	int d;
	listint_t *prst = *header;

	if (!(*header))
		return (0);

	d = (*header)->n;
	prst = (*header)->next;
	free(*header);
	*header = prst;

	return (d);
}
