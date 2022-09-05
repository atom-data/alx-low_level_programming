#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string to check
 * @accept: prefix substring
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])
				break;
		}
		if (!accept[n])
			break;
	}
	return (m);
}
