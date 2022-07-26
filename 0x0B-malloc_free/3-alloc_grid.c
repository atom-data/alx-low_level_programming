#include "main.h"

/**
 * alloc_grid - create a two - dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: two dimensional array on success and
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int k;
	
	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		for (k = 0; k < width; k++)
		{
			ptr[i][k] = 0;
		}
	}
	return (ptr);
}
