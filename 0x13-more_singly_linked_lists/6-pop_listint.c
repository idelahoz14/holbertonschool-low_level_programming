#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: value to be deleted
 * Return: int value removed n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	node = (*head);
	n = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (n);
}
