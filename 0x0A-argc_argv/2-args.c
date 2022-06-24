#include <stdio.h>

/**
 * main - print all argument received
 * @argc: number of arguments passed to main
 * @argv: argument vector of pointers to a string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
