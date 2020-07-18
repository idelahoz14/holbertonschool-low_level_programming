#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings, followed by a new line
 * @separator: constant separator
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list av;
	unsigned int i;
	char *str;

	va_start(av, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(av, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
			if (separator != NULL && i < n)
			{
				printf("%s", separator);
			}
		}
	}

	putchar('\n');

	va_end(av);
}
