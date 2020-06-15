#include "holberton.h"
/**
 *print_alphabetx10 - prints the letters from a to z in lowercase x10
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
int num = '0';

do {
int letter = 'a';
while (letter <= z)
{
_putchar(letter);
letter++;
}
num++;
_putchar('\n');
} while (num < '10');
}
