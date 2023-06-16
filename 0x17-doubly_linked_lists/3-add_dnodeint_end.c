#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node to the tail of a doubly linked list
 *
 * @head: pointer to the head node
 * @n: integer data of the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}

