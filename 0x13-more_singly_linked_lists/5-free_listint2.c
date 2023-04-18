#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 *
 * @header: Header node pointer
 *
 * Description: Head is set to NULL
 *
 */
void free_listint2(listint_t **header)
{
	listint_t *prst;

	if (header == NULL)
		return;

	while (*header)
	{
		prst = (*header)->next;
		free(*header);
		(*header) = prst;
	}
}
