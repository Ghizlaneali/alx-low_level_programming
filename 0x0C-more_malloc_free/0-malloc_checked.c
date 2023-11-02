#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = malloc(sizeof(b);

	if (*ptr == NULL)
	{
		exit(-1);
	}
	return(ptr);

}
