#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters to upper
 *@str: test variable
 *
 *Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i;
	char *st = str;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			st[i] = st[i] - 32;
		}

	}
	return (str);
}
