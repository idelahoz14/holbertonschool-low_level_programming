#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: test variable
 *@n: teste variable
 *
 *Return: void
 */
void print_array(int *a, int n)
{
int counter = 0;

for (counter; counter < n; counter++)
{
printf("%d", a[counter]);
if (counter != n)
{
printf(", ");
}
}
printf("\n");
}
