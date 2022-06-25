#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change
 * @argc: number arguments passed
 * @argv: vector pointers to strings
 *
 * Return: 0 if succesful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, k, l;
	int cent[5];

	cent[0] = 25;
	cent[1] = 10;
	cent[2] = 5;
	cent[3] = 2;
	cent[4] = 1;
	j = 0;
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (k = 0; k < 5; k++)
		{
			l = i / cent[k];
			i -= l * cent[k];
			j += l;
			if (i == 0)
				break;
		}
		printf("%d\n", j);
		return (0);
	}
}
