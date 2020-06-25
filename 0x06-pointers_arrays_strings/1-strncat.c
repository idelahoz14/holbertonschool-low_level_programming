#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: test variable
 * @src: test variable
 * @n: test variable
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
		}
		else
		{
			break;
		}
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
