#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of element in the array
 * @size: size of each element of an array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * nmemb);
	if (ptr == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);

}
