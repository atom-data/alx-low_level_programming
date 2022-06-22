#include "main.h"

/**
 * square_func - confirms if the square of a given numbers is equal to an input
 * @n: integer input
 * @s - integer to be squared
 *
 * Return: -1 for input that is perfect, s otherwise
 */

int square_func(int n, int s)
{
	if (n == 0)
		return (0);
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (square_func(n, s + 1));
}

/**
 * _sqrt_recursion -Find natural square root of a number
 * @n: integer input to be found
 */

int _sqrt_recursion(int n)
{
	return (square_func(n, 1));
}
