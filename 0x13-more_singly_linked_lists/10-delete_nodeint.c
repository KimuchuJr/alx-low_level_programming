#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node
 *
 * @head: Head node pointer
 *
 * @index: Node index to be deleted
 *w
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt;
	listint_t *now = *head;
	listint_t *prev = NULL;

	cnt = 0;
	while (now && (cnt <= index))
	{
		if (cnt == index)
		{
			if (prev)
				prev->next = now->next;
			else
				*head = now->next;
			free(now);
			return (1);
		}
		cnt++;
		prev = now;
		now = now->next;
	}
	return (-1);
}
