#include "hash_tables.h"
/**
 * shash_table_create - create a shash table
 * @size: size of the array
 *
 * Return: A sorted hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t *));
	if (shash_table == NULL)
		return (NULL);
	shash_table->size = size;
	shash_table->array = malloc(size * sizeof(shash_node_t));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}

/**
 * make_shash_node - create a new shash node
 * @key: key for the datum
 * @value: value for the entry to be stored
 *
 * Return: the new node or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shash_node;

	shash_node = malloc(sizeof(shash_node_t));
	if (shash_node == NULL)
		return (NULL);
	shash_node->key = strdup(key);
	if (shash_node == NULL)
	{
		free(shash_node);
		return (NULL);
	}
	shash_node->value = strdup(value);
	if (shash_node->value == NULL)
	{
		free(shash_node->key);
		free(shash_node);
		return (NULL);
	}
	shash_node->next = NULL;
	shash_node->sprev = NULL;
	shash_node->snext = NULL;
	return (shash_node);
}

/**
 * sorted_entry - add node to the sorted list
 * @ht: sorted hash table
 * @shash_node: sorted hash table node
 *
 * Return: Nothing
 */
void sorted_entry(shash_table_t *ht, shash_node_t *shash_node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->shead == NULL)
	{
		ht->shead = ht->stail = shash_node;
		return;
	}
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(shash_node->key, tmp->key) < 0)
		{
			shash_node->snext = tmp;
			shash_node->sprev = tmp->sprev;
			tmp->sprev = shash_node;
			if (shash_node->sprev != NULL)
				shash_node->sprev->snext = shash_node;
			else
				ht->shead = shash_node;
			return;
		}
		tmp = tmp->snext;
	}
	shash_node->sprev = ht->stail;
	ht->stail->snext = shash_node;
	ht->stail = shash_node;
}

/**
 * shash_table_set - sets a key to the hash value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: value of the node
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *shash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
			|| strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	shash_node = make_shash_node(key, value);
	if (shash_node == NULL)
		return (0);
	shash_node->next = ht->array[index];
	ht->array[index] = shash_node;
	sorted_entry(ht, shash_node);
	return (1);
}

/**
 * shash_table_get - retrieve value from sorted hash table
 * @ht: sorted hash table
 * @key: The key to the data
 *
 * Return: value associated to a key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
			ht->size == 0 || ht->array == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print a sorted hash table
 * @ht: sorted hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	char flag;
	shash_node_t *tmp;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print sorted hash table in reverse
 * @ht: sorted hash table
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete sorted hash table
 * @ht: sorted hash table
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		i++;
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	free(ht);
}
