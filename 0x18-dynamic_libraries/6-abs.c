#include "main.h"

/**
 * _abs - compute absolute value of an integer
 *@n: integer input
 * Return: absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
