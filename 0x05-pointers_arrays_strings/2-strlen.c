#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: test variable
 *
 *Return: length of string s
 */
int _strlen(char *s)
{
char *c;
int count = 0;

c = s;
while (*c != '\0')
{
count++;
c++;
}
_putchar (count);
}
