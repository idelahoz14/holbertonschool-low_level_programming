#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: string
 *Return: lengh
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count++;
		_strlen_recursion(s);
	}
	return (count);
}
