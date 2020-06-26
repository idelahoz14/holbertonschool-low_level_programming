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
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	return (str);
}
