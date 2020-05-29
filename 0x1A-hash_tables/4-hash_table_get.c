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
	hash_node_t *corrent;
	char *value = NULL;
	unsigned long int idx;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	if (!(strlen(key)))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	corrent = ht->array[idx];
	while (corrent)
	{
		if (!(strcmp(key, corrent->key)))
			value = strdup(corrent->value);
		corrent = corrent->next;
	}
	return (value);
}
