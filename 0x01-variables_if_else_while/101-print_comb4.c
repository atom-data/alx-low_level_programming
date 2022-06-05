#include <stdio.h>

/**
 * main - Print all combination of three digits
 *
 * Return: successful compilation always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7')
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
