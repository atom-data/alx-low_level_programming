#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - length of a string
 * @c: string of characters
 *
 * Return: size of sting
 */

unsigned int _strlen(const char *c)
{
	unsigned int i;

	if (c == NULL)
		return (0);
	i = 0;
	while (c[i])
		i++;
	return (i);
}

/**
 * add_node - add new node at the beginning
 * @head: pointer to a pointer of location where a new node is added
 * @str: string of characters for the new node
 *
 *Return: address of new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
