#include "hash_tables.h"

/**
 * hash_table_get - Get the value according to the key
 * @ht: hash table
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_table_t *slots = ht;
	hash_node_t *corrent;
	char *value;
	unsigned long int idx;

	if (!slots)
		return (NULL);
	if (!key)
		return (NULL);
	if (!(strcmp(key, "")))
		return (NULL);

	idx = key_index((unsigned char *)key, slots->size);
	corrent = slots->array[idx];
	while (corrent)
	{
		if (!(strcmp(corrent->key, key)))
		{
			value = strdup(corrent->value);
		}
		corrent = corrent->next;
	}
	return (value);
}
