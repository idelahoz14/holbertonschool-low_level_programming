#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: given string
 * @old_size: old size
 * @new_size: new size
 * Return: s or ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *str2;
	unsigned int i, size;

	str2 = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
		return (NULL);
		return (p);
	}

	if (new_size > old_size)
	{
		size = old_size;
	}
	else
	{
		size = new_size;
	}

	str = malloc(new_size);
	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = str2[i];
	}

	free(ptr);
	return (str);
}
