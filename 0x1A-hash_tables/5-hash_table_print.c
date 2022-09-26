#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	char flag;
	hash_node_t *tmp;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	size = ht->size;
	printf("{");
	i = 0;
	while (i < size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
