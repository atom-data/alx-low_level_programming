#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: number whose factorial is to be found
 *
 * Return: -1 for negative input,
 * 1 for 0 and nth factorial for the nth input
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (1);
	else
		return (n * factorial(n - 1));
}
