#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: test variable
 * Return: s
 */
char *rot13(char *str)
{
	int i, j;
	char *st = str;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
			}
		}
	}
	return (st);
}
