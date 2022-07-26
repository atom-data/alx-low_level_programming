#include "main.h"

/**
 * str_concat - string concatenation
 * @s1: first string of characters
 * @s2: second string of characters
 *
 * Return: string of characters
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
	{
		i++;
	}
	k = 0;
	while (s2[k])
	{
		k++;
	}
	ptr = malloc(sizeof(char) * (i + k + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < (i + k + 1); j++)
	{
		if (j < i)
			ptr[j] = s1[j];
		else
		{
			ptr[j] = s2[j - i];
		}
		ptr[i + k + 1] = '\0';
	}
	return (ptr);
}
