#include <stdio.h>

/**
 * main - Print all combinations of two two-digit numbers
 *
 * Return: always successfully compiles
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int p;
	int q;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			l = (10 * i) + j++;
				m = l / 10;
				n = l % 10;

				for (p = m; p <= '9'; p++)
				{
					for (q = n; q <= '9'; q++)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(p);
						putchar(q);

						if (i != '9' && j != '8')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}

		}

	}

	putchar('\n');

	return (0);
}
