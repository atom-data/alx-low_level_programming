#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: input to be checked
 * Return: 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
