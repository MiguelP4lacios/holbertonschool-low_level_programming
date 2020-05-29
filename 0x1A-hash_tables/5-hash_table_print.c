#include "hash_tables.h"

/**
 * hash_table_print -
 *
 * Return: 
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *slots = ht;
	hash_node_t *corrent;
	unsigned long int idx;

	if (!slots)
		return;
	printf("{");
	for ( idx = 0; idx < slots->size; idx++)
	{
		corrent = slots->array[idx];

		while (corrent)
		{
			printf("'%s': '%s'", corrent->key, corrent->value);
			if (corrent->next)
				printf(", ");
			corrent = corrent->next;
		}
		
	}
	printf("}\n");
}