#include "holberton.h"
/**
 *print_most_numbers - Prints the numbers excluding 2 and 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
int number = 48;

while ((number <= 57) && (number != 50 && number != 52))
{
_putchar(number);
number++;
}
_putchar('\n');
}
