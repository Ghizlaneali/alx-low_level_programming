#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = malloc(sizeof(b));

	if (*ptr == 0)
		exit(98);
	return(ptr);
}
