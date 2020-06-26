#include "holberton.h"
/**
 *cap_string - capitalizes all words
 *@str: test variable
 *
 *Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case ' ':
			i++;
		case '\t':
			i++;
		case '\n':
			i++;
		case ',':
			i++;
		case ';':
			i++;
		case '.':
			i++;
		case '!':
			i++;
		case '?':
			i++;
		case '"':
			i++;
		case '(':
			i++;
		case ')':
			i++;
		case '{':
			i++;
		case '}':
			i++;

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
