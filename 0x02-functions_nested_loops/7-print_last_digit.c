#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: integer input
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		m = m * -1;
	}

	_putchar(m + '0');

	return (m);
}
