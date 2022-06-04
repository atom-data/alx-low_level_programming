#include <stdio.h>

/**
 * main - Print alphabet in lowercase then in uppercase
 *
 * Return: compiles successfully
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
