#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *manin - function
 *@argc: number argument
 *@argv: array of string
 *Return: Sum or 1.
 */
int main(int argc, char *argv[])
{
	int i, j, suma = 0;

	if (argc > 1)
	{
		for (i = 1x; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			suma += atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", suma);
	return (0);
}
