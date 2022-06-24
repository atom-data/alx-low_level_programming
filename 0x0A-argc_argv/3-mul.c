#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of pointer to character variables
 *
 * Return: 0 if succesful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;

	printf("%d\n", k);

	return (0);
}
