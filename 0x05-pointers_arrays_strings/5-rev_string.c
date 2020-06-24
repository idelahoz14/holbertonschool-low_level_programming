#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: test variable
 *Description: Reverses a string directly at its pointer address
 *Return: void
 */
void rev_string(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}
s--;
while (count != 0)
{
s--;
count--;
}
_putchar('\n');
}
