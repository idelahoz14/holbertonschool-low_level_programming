#include "holberton.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		count++;
		_strlen_recursion(s);
	}
	return (count);
}
