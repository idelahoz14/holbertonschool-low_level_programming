#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: Pointer
 * Return: lengh.
 */
int _strlen(char *s)
{
	int i, lengh = 0;

	for (i = 0; s[i] != 0; i++)
	{
		lengh++;
	}

	return (lengh);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of second string to concat
 * Return: concat string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0, lengh1, lengh2;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lengh1 = _strlen(s1);
	lengh2 = _strlen(s2);

	if (n >= lengh2)
	{
		str = malloc(sizeof(char) * (lengh1 + lengh2 + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (lengh1 + lengh2 + 1));
	}
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lengh1; i++, k++)
		str[k] = s1[i];

	if (n >= lengh2)
	{
		for (j = 0; k < (lengh1 + lengh2); j++, k++)
			str[k] = s2[j];
	}
	else
	{
		for (j = 0; k < (lengh1 + n); j++, k++)
			str[k] = s2[j];
	}
	str[k] = '\0';
	return (str);
}
