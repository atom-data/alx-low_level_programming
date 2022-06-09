#include "main.h"

/**
 * print_triangle - Print a triangle with a defined size
 * @size: size of the wanted triangle
 */
void print_triangle(int size)
{
	int i;
	int k;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= (size - i); k++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
