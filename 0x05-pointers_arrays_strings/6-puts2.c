#include "holberton.h"
/**
 *puts2 - prints every 2 chars of a string
 *@str: test variable
 *
 *Return: void
 */
void puts2(char *str)
{
while (*str != '\0')
{
if ((*str % 2) == 0)
{
_putchar(*str);
}
str++;
}
_putchar('\n');
}
