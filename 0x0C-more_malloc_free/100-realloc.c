#include "main.h"

/**
 * malloc - reallocate memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space
 * @new_size: size of the new memory block
 *
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int max = new_size;
	char *point;
	char *oldpoint = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
		return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	point = malloc(new_size);

	if (point == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		point[i] = oldpoint[i];
	free(ptr);
	return (0);


}
