#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints integer arguments with a separator
 *
 * @separator: - thing to print between numbers
 * @n: - number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;

	unsigned int i;

	va_list args;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *)separator;

	va_start(args, n);

	for (i = 1; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), s);
	}
	printf("\n");

	va_end(args);
}
