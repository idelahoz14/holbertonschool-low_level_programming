#include "holberton.h"
/**
 *_abs - Returns the absolute value of n
 *Description: This program will return the absolute value of a number
 *@n: variable tested
 *Return: the absolute value of an integer.
 */
int _abs(int n)
{
if (n <= 0)
{
return (-n);
}
else
{
return (n);
}
}
