#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers & new line at the end
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list av;
	unsigned int i;

	va_start(av, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(av, int));

		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(av);
}
