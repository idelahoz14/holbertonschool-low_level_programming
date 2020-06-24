#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: string to print
 *
 *Return: void
 */
void puts_half(char *str)
{
char *st;
int i, count = 0, middle;

st = str;
for (i = 0; st[i] != '\0'; i++)
{
count++;
}
count = count + 1;
middle = count / 2;
if (count % 2 == 0)
{
for (i = middle; st[i] != '\0'; i++)
{
_putchar(st[i]);
}
}
else
{
middle = (count - 1) / 2;
for (i = middle; st[i] != '\0'; i++)
{
_putchar(st[i]);
}
}
}
