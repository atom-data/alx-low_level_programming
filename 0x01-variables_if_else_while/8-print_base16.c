#include <stdio.h>

/**
 * main - Print all numbers of base 16
 *
 * Return: successful compilation
 */
int main(void)
{
	char i;
	char k;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}

	putchar('\n');

	return (0);
}
