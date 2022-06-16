#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: input to be checked
 *
 * Return: 1 if alphabet, 0 0therwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
