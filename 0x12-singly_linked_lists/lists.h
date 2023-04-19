#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s - singly linked list
 *
 * @str: malloc'ed string
 * @len: lemgth of the string
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **header, const char *str);
list_t *add_node_end(list_t **header, const char *str);
void free_list(list_t *header);
void print_first(void);

#endif
