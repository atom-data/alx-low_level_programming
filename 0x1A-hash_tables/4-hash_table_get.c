#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table to retrieve value from
 * @key: The key of the datum
 *
 * Return: value associated with element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

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
