#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: string
 *Return: void
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count++;
		_strlen_recursion(s);
	}
	return(count);
}
