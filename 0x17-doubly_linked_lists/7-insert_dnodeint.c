#include "lists.h"
/**
 * insert_dnodeint_at_index - unction that inserts a new node
 * at a given position.
 * @h: address of head main
 * @idx: position to insert
 * @n: data
 * Return: node insert.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *inst, *corrent = *h;
	size_t i = 0;

	inst = malloc(sizeof(dlistint_t));
	if (inst == NULL)
		return (NULL);
	inst->n = n;
	inst->next = NULL;
	inst->prev = NULL;
	if (*h == NULL)
	{
		*h = inst;
		return (inst);
	}
	if (idx == 0)
	{
		(*h)->prev = inst, inst->next = *h, *h = inst;
		return (inst);
	}
	else
	{
		for (i = 1; corrent; i++)
		{
			if (idx == i && corrent->next != NULL)
			{
				inst->prev = corrent, inst->next = corrent->next;
				corrent->next->prev = inst;
				corrent->next = inst;
				return (inst);
			}
			else if (idx == i && corrent->next == NULL)
			{
				corrent->next = inst, inst->prev = corrent;
				return (inst);
			}
			corrent = corrent->next;
		}
	}
	free(inst);
	return (NULL);
}
