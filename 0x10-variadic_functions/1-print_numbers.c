#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string of characters
 * @n: number of integers passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	i = 0;
	while (i < n - 1)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("%d\n", va_arg(arg, int));
	va_end(arg);
}
