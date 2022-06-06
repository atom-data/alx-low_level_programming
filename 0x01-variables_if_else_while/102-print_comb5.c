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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = ((10 * i) + (j + 1));

			for (l = k; l <= 99; l++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar((l / 10) + '0');
				putchar((l % 10) + '0');

				if (k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
