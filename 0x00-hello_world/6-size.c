#include <stdio.h>

/**
 * main - Determine size of data types
 *
 * Return: 0 Successful compilation and execution
 */
int main(void)
{
	int k;
	char m;
	long int n;
	float x;
	long long int j;

	printf("Size of a char: %d byte(s)\n", sizeof(m));

	printf("Size of an int: %d byte(s)\n", sizeof(k));

	printf("Size of a long int: %d byte(s)\n", sizeof(n));

	printf("Size of a long long int: %d byte(s)\n", sizeof(j));

	printf("Size of a float: %d byte(s)\n", sizeof(x));

	return (0);
}
