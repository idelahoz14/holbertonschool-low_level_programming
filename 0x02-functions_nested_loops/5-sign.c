#include "holberton.h"
/**
 *print_sign - Prints the sign of a given integer
 *@n: tested variable
 *Description: This program will print the sign followed by a return value
 *Return: 1 if positive, 0 if zero, and -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
