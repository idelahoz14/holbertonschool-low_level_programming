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

while (counter < n)
{
printf("%d", a[counter]);
counter++;
if (counter != n)
{
printf(", ");
}
}
printf("\n");
}
