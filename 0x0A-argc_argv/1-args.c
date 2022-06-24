#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: number of arguments passed
 * @argv: pointer to strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
