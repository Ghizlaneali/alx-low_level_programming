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
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
