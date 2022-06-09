#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of the square whose size is needed
 */
void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
