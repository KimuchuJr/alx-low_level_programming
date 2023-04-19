#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node at the end of list.
 *
 * @header:  Header node
 *
 * @str: String elements to the node
 *
 * Return: New element address
 */
list_t *add_node_end(list_t **header, const char *str)
{
	list_t *last;
	list_t *prst = *header;
	char *niu_str;

	last = malloc(sizeof(list_t));
	if (!last)
		return (0);

	niu_str = strdup(str);
	last->str = niu_str;
	if (!(last->str))
	{
		free(last);
		return (0);
	}
	last->len = strlen(niu_str);

	if (prst == NULL)
	{
		*header = last;
	}
	else
	{
		while (prst->next)
			prst = prst->next;
		prst->next = last;
	}
	last->next = NULL;

	return (last);
}
