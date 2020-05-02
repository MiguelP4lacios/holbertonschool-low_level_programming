#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 * @head: linked list
 * @index: position to return
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *corrent = head;
	size_t i;

	if (!head)
		return (0);
	for (i = 0; corrent; i++)
	{
		if (i == index)
			return (corrent);
		corrent = corrent->next;
	}
	return (NULL);
}
