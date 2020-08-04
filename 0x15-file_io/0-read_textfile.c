#include "holberton.h"
/**
 * read_textfile - reads a text file and prints
 * @filename: name of the file
 * @letters: numbers of characters to be printed
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes, show;
	int s;
	char *ptr;

	if (filename == NULL)
	{
		return (0);
	}

	s = open(filename, O_RDONLY);
	if (s == -1)
	{
		return (0);
	}

	ptr = malloc((sizeof(char)) * letters);
	if (ptr == NULL)
	{
		return (0);
	}

	num_bytes = read(s, ptr, letters);
	ptr[num_bytes] = '\0';
	close(s);

	if (num_bytes == 0)
	{
		free(ptr);
		return (0);
	}

	show = write(STDOUT_FILENO, ptr, num_bytes);
	free(ptr);
	return (show);
}
