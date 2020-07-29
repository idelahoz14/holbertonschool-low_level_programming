#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node
 * @index: node that I want
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
