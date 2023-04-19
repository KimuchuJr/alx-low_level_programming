#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @header: Head node pointer
 *
 */
void free_list(list_t *header)
{
	list_t *prst;

	while (header)
	{
		prst = header->next;
		free(header->str);
		free(header);
		header = prst;
	}
}
