#include "holberton.h"
/**
 *print_triangle - prints triangles
 *@size: test varible
 *
 *Description: Will print a triangle of size specified followed by a
 *new line. If size is 0 or less, then it will only print a new line.
 *Return: void
 */
void print_triangle(int size)
{
int space;
int index:
int rows = 1;

if (size <= 0)
{
_putchar('\n');
return;
}

while (rows <= size)
{
space = 1;
index = 1;
while (space <= (size - rows))
{
_putchar(' ');
space++;
}
while (index <= rows)
{
_putchar('#');
index++;
}
_putchar('\n');
rows++;
}
}
