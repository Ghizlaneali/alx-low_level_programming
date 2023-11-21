#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_listint - function with one argument
 * @h: const pointer type
 *
 * Description: prints all the elements of a listint_t list
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->len);
		h = h->next;
		count++;
	}
	return (count);
}
