#include "lists.h"

/**
 * list_len - prints numbers of elements of a node
 * @h: node
 * Return: number of elements(i)
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
