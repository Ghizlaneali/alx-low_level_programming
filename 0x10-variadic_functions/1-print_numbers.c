#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{

	int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{		
		printf("%d %s", i, separator);
		if (separator == NULL)
			continue;
	}
	va_end(args);

	printf("\n");
}
