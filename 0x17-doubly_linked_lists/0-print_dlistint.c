#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 *
 * @head: the head node
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t length = 0;

	while (head)
	{
		printf("%d\n", head->n);
		length++;
		head = head->next;
	}

	return (length);
}
