#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be checked
 * @needle: substring to be looked for
 *
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int m, n;

	m = 0;
	n = 0;
	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
			{
			if (haystack[m + n] == needle[n])
				n++;
			else
				break;
			}
			if (needle[n])
			{
				m++;
				n = 0;
			}
			else
				return (haystack + m);
	}
	return (0);
}
