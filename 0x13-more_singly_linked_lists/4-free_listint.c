#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Freesa linked list
 *
 * @header: Head node pointer
 *
 */
void free_listint(listint_t *header)
{
	listint_t *tmp;

	while (header)
	{
		tmp = header->next;
		free(header);
		header = tmp;
	}
}
