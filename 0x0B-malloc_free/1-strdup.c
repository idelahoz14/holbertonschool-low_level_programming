#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copies a given string
 * @str: string
 *
 * Return: new string or NULL if its empty
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	s = malloc((sizeof(char) * _strlen(str)));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(str); i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}

/**
 * _strlen - returns the length of a string.
 * @s: Pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return (i);
}
