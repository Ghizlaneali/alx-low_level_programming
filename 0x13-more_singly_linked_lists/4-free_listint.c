#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
