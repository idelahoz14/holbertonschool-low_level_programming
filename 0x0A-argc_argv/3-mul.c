#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, resul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			resul = resul * atoi(argv[i]);
		}
	}
	printf("%d\n", resul);
	return (0);
}
