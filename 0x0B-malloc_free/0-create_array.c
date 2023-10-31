#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point.
 * @size : size of array.
 * @c : characters in array.
 * Return : pointer to array, NULL if the size iS 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ar = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		ar = (char *)malloc(size * sizeof(char));
		if (ar != NULL)
		{
			for (i = 0; i < size; i++)
				ar[i] = c;
		}
	}
	return (ar);
}
