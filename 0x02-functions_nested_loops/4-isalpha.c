#include "holberton.h"
/**
 *_isalpha - decides if the character is a letter
 *
 *Description: This program will check if the letter is lowercase or uppercase
 *Return: 1 if lowercase or uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
if (c < 'a' && c > 'z')
{
return (1);
}
else
{
return (0);
}
}
