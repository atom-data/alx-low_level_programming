#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string of characters
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;
	int len;

	len = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len = len + 1;
	}
	return (len);

}
