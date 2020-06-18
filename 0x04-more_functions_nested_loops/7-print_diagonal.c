#include "holberton.h"
/**
 *print_diagonal - prints diagonal lines
 *@n: number of times the character \ is printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
  int index = 0;

if (n <= 0)
{
_putchat('\n');
}
else
{
while (index < n)
{
int space = 0;

while (space < index)
{
_putchar(' ');
space++;
}
_putchar('\\');
index++;
}
}
}
