#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *head, *corrent;
	hash_table_t *slots = ht;

	if (slots == NULL)
		return;
	if (slots->array == NULL)
	{
		free(slots);
		return;
	}
	for (idx = 0; idx < slots->size; idx++)
	{
		head = slots->array[idx];
		while (head != NULL)
		{
			corrent = head;
			head = head->next;
			free(corrent->key);
			free(corrent->value);
			free(corrent);
		}
	}
	free(slots->array);
	free(slots);
}
