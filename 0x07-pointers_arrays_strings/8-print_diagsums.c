#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals
 * @a: square matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	l = 0;
	m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}

	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%d, %d\n", l, m);
}
