#include "lists.h"
dlistint_t *createNode(int data);
/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: address of head main
 * @n: Data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = createNode(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * createNode - It creates a node whit data
 * @data: integer
 * Return: address of the new node
*/
dlistint_t *createNode(int data)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = data;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
