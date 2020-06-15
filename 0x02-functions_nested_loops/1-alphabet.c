#include "holberton.h"
/**
 *print_alphabet - prints the letters from a to z in lowercase
 *
 *Return: Always 0
 */
void print_alphabet(void)
{
int letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
