#include "hash_tables.h"

/**
 * hash_table_create - This create a hash table
 * @size: length of the table
 * Return: A table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *slots = NULL;
	unsigned long int i;

	slots = malloc(sizeof(hash_table_t));
	if (slots == NULL)
		return (NULL);

	slots->array = malloc(sizeof(hash_node_t *) * size);
	if (slots->array == NULL)
	{
		free(slots);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		slots->array[i] = NULL;
	slots->size = size;
	return (slots);
}
