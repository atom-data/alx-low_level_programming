#include "hash_tables.h"

/**
 * key_index - givs the index of a key
 * @key: The key
 * @size: suize of the array
 *
 * Return: index where key-value pair is stored in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, djb2;

	djb2 = hash_djb2(key);
	index = djb2 % size;
	return (index);
}
