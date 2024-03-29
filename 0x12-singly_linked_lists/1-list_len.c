#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: pointer to an list element
 *
 * Return: size of linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}
