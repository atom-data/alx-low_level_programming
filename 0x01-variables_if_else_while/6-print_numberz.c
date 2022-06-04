#include <stdio.h>

/**
 * main - Print digits zero to nine without using character type
 *
 * Return: compiles succussfully
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

