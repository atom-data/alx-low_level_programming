#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
	int j;

	j = 0;
	while (j <= 14)
	{
		if (j <= 9)
		{
			_putchar(j + '0');
		}
		else
		{
			int k;

			for (k = 0; k <= 4; k++)
			{
				_putchar(1 + '0');
				_putchar(k + '0');
			}

		}

		j++;
	}
	_putchar('\n');
	i++;
	}
}
