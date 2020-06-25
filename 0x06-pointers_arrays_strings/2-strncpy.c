#include "holberton.h"
/**
 *_strncpy - copies a string.
 *@dest: test variable
 *@src: test variable
 *@n: test variable
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *str = dest;

	while ((count < n) && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}

	while (count < n)
	{
		*dest = '\0';
		count++;
		dest++;
	}

	return (str);
}
