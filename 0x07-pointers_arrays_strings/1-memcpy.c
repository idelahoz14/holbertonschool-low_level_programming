#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest: test variable
 *@src: test variable
 *@n: test variable
 *
 *Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
