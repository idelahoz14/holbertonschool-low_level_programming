#include "lists.h"
/**
 * add_node - add a node at the start
 * @head: header
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *ptr;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
