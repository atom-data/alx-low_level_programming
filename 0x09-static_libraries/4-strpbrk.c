#include "main.h"

/**
 * _strpbrk - search a string to set of bytes
 * @s: string to be checked
 * @accept: string with bytes to checked
 *
 * Return: pointer matching one of the bytes or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k]; k++)
	{
		for (l = 0; accept[l]; l++)
		{
			if (s[k] == accept[l])
				break;
		}
		if (accept[l])
			return (s + k);
	}
	return (0);
}
