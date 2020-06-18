#include "holberton.h"
/**
 *print_numbers - prints the numbers
 *
 *Description: Prints the numbers from 0 through 9
 *Return: void
 */
void print_numbers(void)
{
int number = '0';

while (number <= '9')
{
_putchar(number);
number++;
}
_putchar('\n');
}
