#include "main.h"

/**
 * _strdup - create a copy of a string
 * @str: string to be copied
 *
 * Return: pointer to a newly allocated memory
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int k;
	unsigned int sum = 1;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		sum += 1;
	}
	ptr = malloc(sizeof(char) * sum);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; *(str + k) != '\0'; k++)
	{
		ptr[k] = *(str + k);
	}
	ptr[sum] = '\0';
	return (ptr);
}
