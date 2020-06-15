#include "holberton.h"
/**
 *checks for uppercase character
 *
 *Return: Always 0.
 */
int _isalphe(int c)
{
if (c < 'a' && c > 'z')
{
return (1);
}
else
{
return (0);
}
}
