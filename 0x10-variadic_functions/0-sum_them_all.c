#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters.
 * @n : number of arguments
 * Return :the sum of all its parameters. And 0 if n is equal to 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (int i = 0; i < n; i++)
	{
		int j = va_arg(args, int);

		sum += j;
	}
	va_end(args);

	return (sum);
}
