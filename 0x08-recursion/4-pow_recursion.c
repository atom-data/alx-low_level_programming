#include "main.h"

/**
 * _pow_recursion - exponentiation
 * @x: integer base
 * @y: integer index
 *
 * Return: -1 for negative index,
 * base to the power of index otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
