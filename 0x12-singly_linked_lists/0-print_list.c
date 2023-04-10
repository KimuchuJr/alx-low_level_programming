#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

long _strlen(char *str);
/**
 * print_list - prints a linked list
 * @head: Head node pointer
 * Return: Number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t len;

	len = 0;
	while (head != NULL)
	{
		len++;
		if (head->str)
			printf("[%lu] %s\n", _strlen(head->str), head->str);
		else
			printf("[0] (nil)\n");
		head = head->next;
	}
	return (len);
}
/**
 * _strlen - String length
 * @str: Processed string
 * Return: Length of the string
 */
long _strlen(char *str)
{
	long len;

	len = 0;
	while (*(str + len))
		len++;

	return (len);
}
