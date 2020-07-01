#include "holberton.h"
/**
 *_puts_recursion - prints a string recursively
 *
 *@s: test variable
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (-1);
	}

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_rescursion(s);
	}
}
