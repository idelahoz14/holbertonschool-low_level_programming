#include "lists.h"
/**
 * print_listint - prints a list of integers
 * @h: node
 * Return: int lenght of list i
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
