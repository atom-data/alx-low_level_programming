#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sum of parameters
 * @n: number of inputs
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
