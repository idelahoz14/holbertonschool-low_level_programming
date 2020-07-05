#include <stdio.h>
#include <stdlib.h>
/**
 *main - functions
 *@argc: number argument
 *@argv: array of string
 *Return: resul
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
