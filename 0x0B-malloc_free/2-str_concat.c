#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	char *d;

	d = (char *)malloc(sizeof (s1) + sizeof (s2) + 1);

	while (*s1 != '\0')
	{
		d[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		d[i] = *s2;
		s2++;
		i++;
	}
	d[i] = '\0';

	return (d);
}
