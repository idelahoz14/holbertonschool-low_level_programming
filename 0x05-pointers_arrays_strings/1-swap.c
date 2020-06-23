#include "holberton.h"
/**
 *swap_int - swaps the values of two integers
 *@a: test variable
 *@b: test variable
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
