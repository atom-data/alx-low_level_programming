#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination of the copy
 * @src: source of the copy
 * @n: size of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; src[k] <= src[n - 1]; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
