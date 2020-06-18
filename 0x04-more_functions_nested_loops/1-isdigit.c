#include "holberton.h"
/**
 *_isdigit - Decides if some character is a digit
 *@c: test variable
 *
 *Description: Program decides if some arbitrary character is a number
 *between 0 and 9.
 *Return: 1 if c is a digit and 0 if its other
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
