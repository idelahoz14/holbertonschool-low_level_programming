#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (-1);
	}
	else
	{
		_print_rev_recursion(s);
		_putchar(*s);
		s++;
	}
}
