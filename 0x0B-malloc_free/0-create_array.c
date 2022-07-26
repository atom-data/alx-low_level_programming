#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: character for initializing the memory block
 *
 * Return: pointer to the memory block
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size  == 0)
		ptr = NULL;
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}
	return (ptr);
}
