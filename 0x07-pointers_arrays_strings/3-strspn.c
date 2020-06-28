#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: bytes that are acceptable
 *
 *Return: Number of bytes in s which consist only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (bytes);
}
