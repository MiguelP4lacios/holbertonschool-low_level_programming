#include "hash_tables.h"

/**
 * hash_table_print - print hash table like a dic
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *slots = ht;
	hash_node_t *corrent;
	unsigned long int idx, i = 0;

	if (!slots)
		return;
	printf("{");
	for (idx = 0; idx < slots->size; idx++)
	{
		corrent = slots->array[idx];

		if ((i > 0) && (corrent))
			printf(", ");
		while (corrent)
		{
			printf("'%s': '%s'", corrent->key, corrent->value);
			i++;
			if (corrent->next)
				printf(", ");
			corrent = corrent->next;
		}
	}
	printf("}\n");
}
