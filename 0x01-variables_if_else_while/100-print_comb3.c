#include <stdio.h>

/**
 * main - Print all possible combinations of two digits
 *
 * Return: successful compilation
 */
int main(void)
{
	int i;
	int k;

	for (i = '0'; i <= '8'; i++)
	{
		for (k = i + 1; k <= '9'; k++)
		{
			putchar(i);
			putchar(k);

			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
