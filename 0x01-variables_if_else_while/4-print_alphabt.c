#include <stdio.h>

/**
 * main - Print lowercase alphabet followed by a line
 *
 * Return: compiles successfully
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
