#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - Add a new element to the hash table
 * @ht: hash table
 * @key: key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *slots = ht;
	hash_node_t *node, *corrent;
	unsigned long int i;

	if (!slots)
		return (0);
	if (!key)
		return (0);
	if (!(strcmp(key, "")))
		return (0);
	node = create_node(key, value);
	if (node == NULL)
		return (0);
	i = key_index((unsigned char *)key, slots->size);
	if (slots->array[i] == NULL)
	{
		node->next = NULL;
	}
	else
	{
		corrent = slots->array[i];
		while (corrent)
		{
			if (!(strcmp(corrent->key, key)))
			{
				free(corrent->value);
				corrent->value = strdup(value);
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			corrent = corrent->next;
		}
		corrent = slots->array[i];
		node->next = corrent;
	}
	slots->array[i] = node;
	return (1);
}
/**
 * create_node - This create new nodes
 *
 * @key: key of the dic
 * @value: is the value associated with the key
 *
 * Return: new node
 *
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	return (node);
}
