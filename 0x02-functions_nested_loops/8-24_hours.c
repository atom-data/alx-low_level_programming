#include "main.h"

/**
 * jack_bauer - prints evry minute of the day
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	i = 0;
	j = 0;
	m = (10 * i) + j;
	if (m <= 23)
	{
		while (i <= 2)
		{
			while (j <= 9)
			{
				k = 0;
				while (k <= 5)
				{
					l = 0;
					while (l <= 9)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
						l++;
					}
					k++;
				}
				j++;
			}

			i++;
		}
	}
}
