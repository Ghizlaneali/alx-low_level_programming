#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array : array ot be searched
 * @size : size of the array
 * @cmp : function used
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
			return (-1);
	}
}
