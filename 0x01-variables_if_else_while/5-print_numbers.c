#include <stdio.h>

/**
 * main - Print all single digit numbers from 0 to 9
 *
 * Return: successful compilation always
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
