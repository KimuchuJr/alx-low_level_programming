#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -Adds node at beginning of the linked list
 *
 * @header: Header node
 *
 * @str: String element
 *
 * Return: New node address
 */
list_t *add_node(list_t **header, const char *str)
{
	list_t *niu_nd;
	char *niu_str;

	niu_nd = malloc(sizeof(list_t));
	if (!niu_nd)
		return (0);
	niu_str = strdup(str);
	niu_nd->str = niu_str;
	if (!(niu_nd->str))
	{
		free(niu_nd);
		return (0);
	}
	niu_nd->len = strlen(niu_nd->str);
	niu_nd->next = *header;
	*header = niu_nd;

	return (niu_nd);
}
