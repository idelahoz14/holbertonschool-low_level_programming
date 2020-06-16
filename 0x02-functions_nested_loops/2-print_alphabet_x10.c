#include "holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10x
 *
 *Description: This program will print the lowercase letters ten times
 *Return: 0 upon successful completion
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
