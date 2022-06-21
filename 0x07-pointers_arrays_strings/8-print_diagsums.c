#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of diagonal elements
 * @a: 2-dimensional array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j,sum;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}
	printf("%d\n", sum);
	
}
