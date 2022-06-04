#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: successful compiling
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
