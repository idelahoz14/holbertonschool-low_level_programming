#include "lists.h"
/**
 * listint_len - lenght of a linked list
 * @h: node
 * Return: lenght
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
