#include "main.h"

/**
 * array_range - create an array of integers
 * @min: first integer
 * @max: second integer
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);

}
