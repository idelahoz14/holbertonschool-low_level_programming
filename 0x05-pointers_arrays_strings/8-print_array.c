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
int i;

while (i < n)
{
printf("%d", a[i]);
i++;
if (i != n)
printf(", ");
}
printf("\n");
}
