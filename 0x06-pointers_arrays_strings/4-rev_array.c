#include "holberton.h"
/**
 *reverse_array - reverses array of integers
 *@a: integer array
 *@n: number of elements in array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
