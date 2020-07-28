#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning
 * @head: element to be added
 * @n: number to be added
 * Return: new head adress
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
