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
	int i, lengh = 0;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
	{
		lengh++;
	}

	s = malloc((sizeof(char) * leng)h);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lengh; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
