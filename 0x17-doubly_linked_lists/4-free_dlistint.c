#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: the head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
