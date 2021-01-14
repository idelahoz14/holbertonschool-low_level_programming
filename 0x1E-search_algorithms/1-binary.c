#include "search_algos.h"

/**
* print_array - prints array
*
* @array: array to print
* @left: part of array
* @right: part of array
*
* Return: 0
*/

void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	for (; left <= right; left++)
	{
		printf("%d", array[left]);
		if (left != right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
* binary_search - searches for a value in a sorted array of integers
*
* @array: array sorted
* @size: size of the array
* @value: value to search
*
* Return: position, -1 if failure
*/

int binary_search(int *array, size_t size, int value)
{
	size_t right, left, middle;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;
	middle = 0;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
		}
	return (-1);
}
