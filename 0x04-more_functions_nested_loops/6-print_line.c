#include "holberton.h"
/**
 *print_line - Draws a straight line in the terminal
 *@n: test variable
 *
 *Return: void
 */
void print_line(int n)
{
  int index = 0;

  while (index < n)
    {
      _putchar('_');
      index++;
    }
  _putchar('\n');
}
