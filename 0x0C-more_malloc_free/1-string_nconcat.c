#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes to write from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		i = 0;
	else
	{
		i = 0;
		while (s1[i] != '\0')
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
		j++;
	}
	if (n >= j)
		k = j;
	else
		k = n;
	ptr = malloc(sizeof(char) * (i + k));
	if (ptr == NULL)
		return (NULL);
	l = 0;
	while (l < (i + k))
	{
		if (l < i)
			ptr[l] = s1[l];
		else
			ptr[l] = s2[l - i];
		l++;
	}
	return (ptr);

}
