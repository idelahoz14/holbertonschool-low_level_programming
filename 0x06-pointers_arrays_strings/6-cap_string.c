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

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
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

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
