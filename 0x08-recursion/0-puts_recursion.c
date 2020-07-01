#include "holberton.h"
/**
 *
 *
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_rescursion(s);
	}
	else
	{
		return (-1);
	}
}
