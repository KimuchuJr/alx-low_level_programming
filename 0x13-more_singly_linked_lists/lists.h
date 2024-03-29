#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Linked lists
 * @n: Integer
 * @next: Pointer to next node
 *
 * Description: Node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *c);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **header, const int n);
listint_t *add_nodeint_end(listint_t **header, const int n);
void free_listint(listint_t *header);
void free_listint2(listint_t **header);
int pop_listint(listint_t **header);
listint_t *get_nodeint_at_index(listint_t *header, unsigned int index);
int sum_listint(listint_t *header);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif
