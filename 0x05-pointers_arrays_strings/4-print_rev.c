#include "holberton.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: test variable
 *Return : void
 */
void print_rev(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}
    
while (count != 0)
{
putchar(*s);
s--;
count--;
}
}
