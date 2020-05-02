#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
