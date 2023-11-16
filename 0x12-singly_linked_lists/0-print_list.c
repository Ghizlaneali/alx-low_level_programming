#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the linked list
 * @h: pointer to the structure
 * Return: return the length of the list
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
