#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - calculate the sum of a doubly linked list
 *
 * @head: the head node
 *
 * Return: the sum of the elements
 */
int sum_dlistint(const dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return sum;
}
