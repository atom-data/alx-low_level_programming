#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 *Return: compile successfully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
