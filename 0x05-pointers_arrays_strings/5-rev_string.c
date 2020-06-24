#include "holberton.h"
/**
 *rev_string - reverses a string
 *@s: test variable
 *Description: Reverses a string directly at its pointer address
 *Return: void
 */
void rev_string(char *s)
{
int aux1, aux2;
char holberton_al_reves;
 
aux1 = 0;
aux2 = 0;
 
while (s[aux1] != '\0')
{
aux1++;
}

aux1 = aux1 - 1;
while (aux1 > aux2)
{
holberton_al_reves = s[aux2];
s[aux2] = s[aux1];
s[aux1] = holberton_al_reves;
aux1--;
aux2++;
}
}
