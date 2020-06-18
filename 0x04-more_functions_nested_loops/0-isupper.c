#include "holberton.h"
/**
 *_isupper - checks for uppercase
 *@c: test variable
 *
 *Description: this program will determine if a character is uppercase
 *Return: 1 if uppercase and 0 if its another
 */
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
