#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @str: string to get its length
 * Return: lengh
 */
int _strlen(char *str)
{
	int lengh = 0;

	while (str[lengh] != '\0')
	{
		lengh++;
	}
	return (lengh);
}
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int s, show;

	if (filename == NULL)
	{
		return (-1);
	}

	s = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (s == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	show = write(s, text_content, _strlen(text_content));
	close(s);

	if (show == -1)
	{
		return (-1);
	}

	return (1);
}
