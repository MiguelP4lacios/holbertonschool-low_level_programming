#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: linked list
 * Return: sum if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *corrent = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (corrent)
	{
		sum += corrent->n;
		corrent = corrent->next;
	}
	return (sum);
}
