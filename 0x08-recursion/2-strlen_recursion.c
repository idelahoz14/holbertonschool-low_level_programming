#include "holberton.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (_strlen_recursion(s + 1) + 1);
}
