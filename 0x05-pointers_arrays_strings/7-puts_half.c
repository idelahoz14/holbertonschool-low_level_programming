#include "holberton.h"
/**
 *puts_half - prints half of a string
 *@str: string to print
 *
 *Return: void
 */
void puts_half(char *str)
{
int i, count = 0, middle;

for (i = 0; str[i] != '\0'; i++)
{
count++;
}
middle = count / 2;
if (count % 2 == 0)
{
for (i = middle; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
middle = (count - 1) / 2;
for (i = middle; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
}
