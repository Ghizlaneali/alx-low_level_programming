#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int space = strlen(s1) + strlen(s2) + 1;

	if (cat == NULL)
	{
		return (NULL);
	}
	if (cat != NULL)
	{
		cat = (char *)malloc(space);
	}
	return (cat);
}
