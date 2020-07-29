#include "lists.h"
/**
 * sum_listint - sum all the data
 * @head: data
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int i = 0, sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		i = head->n;
		sum += i;
		head = head->next;
	}

	return (sum);
}
