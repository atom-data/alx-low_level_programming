#include <stdio.h>

/**
 * main - Print 1 to 100, with Fizz, Buzz and FizzBuzz at certain locations
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int j;
		int k;
		int l;

		j = i % 3;
		k = i % 5;
		l = j + k;

		if (l == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (k == 0)
		{
			printf("%s", "Buzz");
		}
		else if (j == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}

	}

	putchar('\n');

	return (0);
}
