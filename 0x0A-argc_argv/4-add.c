#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *manin - function
 *@argc: number argument
 *@argv: array of string
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
