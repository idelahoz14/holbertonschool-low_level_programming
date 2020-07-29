#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to first argument
 * @idx: position to the new node
 * @n: number to be added in the node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *node;
	unsigned int i;

	node = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	i = 0;
	while (node && i < (idx - 1))
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
