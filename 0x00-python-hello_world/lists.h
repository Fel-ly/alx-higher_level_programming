#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @num: number
 * @next: points to the node that is next
 */
typedef struct listint_s
{
	int num;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int num);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
