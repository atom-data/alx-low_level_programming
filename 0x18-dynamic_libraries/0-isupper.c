#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: input to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
