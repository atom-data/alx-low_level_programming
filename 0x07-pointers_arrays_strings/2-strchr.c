#include "main.h"

/**
 * _strchr - locate first occurrence of a character in a string
 * @s: string to be checked
 * @c: character to be checked
 *
 * Return: Address of the character
 */

char *_strchr(char *s, char c)
{
	char *a;

	for (a = s; *a != '\0'; a++)
	{
		if (*a == c)
		{
			return (a);
		}
	}
	if (*a == c)
		return (a);
	return (0);
}
