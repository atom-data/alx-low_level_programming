#include "main.h"
/**
 * print_number - Print an integer
 * @n: number to printed
 */
void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		m = (n * -1);
	}
	else if (n == 0)
	{
		_putchar('0');
			m = 0;
	}
	else
	{
		m = n;
	}

	if (m > 0)
	{
		if ((m / 10) > 0)
		{
			print_number((m / 10));
		}

		_putchar((m % 10) + '0');
	}
}
