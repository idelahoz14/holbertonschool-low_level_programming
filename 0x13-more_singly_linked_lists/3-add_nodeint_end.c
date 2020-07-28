#include "lists.h"
/**
 * add_nodeint_end - new node at the end
 * @head: first value
 * @n: data
 * Return: new node at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	while(*head)
	{
		head = &(*head)->next;
	}

	node->n = n;
	node->next = NULL;
	*head = node;

	return (node);
}
