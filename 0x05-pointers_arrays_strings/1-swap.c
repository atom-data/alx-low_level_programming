#include "main.h"

/**
 * swap - swap values of two integers
 * @a: first integer input
 * @b: second integer input
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
