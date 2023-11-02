#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers, ordered from @min to @max
 * @min: first and minimum value of the array to be created
 * @max: last and maximum value of the array to be created
 *
 * Return: pointer to the newly created array (SUCCESS) or
 * NULL if @min > @max (FAILURE) or
 * NULL if insufficient memory was available (FAILURE)
 */

int *array_range(int min, int max)
{
	int *p;
	int size, i, j;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	p = malloc(sizeof(int) * size);
	if (p == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		p[i] = j;
	if (max == min)
		p[i] = max;
	return (p);
}
