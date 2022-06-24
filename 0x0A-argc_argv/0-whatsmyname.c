#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of arguments supplied to main
 * @argv: array of pointers to the strings passed to the program
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
