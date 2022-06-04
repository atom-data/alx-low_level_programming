#include <stdio.h>

/**
 * main - Print digits from 0 to 9 separated by ,  and end with $
 *
 * Return: Always compiles successfully
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
