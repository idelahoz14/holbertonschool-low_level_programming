#include "holberton.h"
/**
 *_memset - fills memory with constant byte
 *@s: test variable
 *@b: test variable
 *@n: test variable
 *
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
