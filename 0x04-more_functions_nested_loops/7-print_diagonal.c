#include "holberton.h"
/**
 *print_diagonal - prints diagonal lines
 *@n: number of times the character \ is printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int index = 0;

while (index < n)
{
int space = 0;

while (space < index)
{
_putchar(' ');
space++;
}
_putchar('\\');
_putchar('\n');
index++;
}
}
}
