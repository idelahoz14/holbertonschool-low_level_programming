#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list av;
	char *str, ch;
	int i = 0, j, sep;
	float f;

	va_start(av, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			j = va_arg(av, int);
			printf("%d", j);
			sep = 1;
			break;
		case 'c':
			ch = va_arg(av, int);
			printf("%c", ch);
			sep = 1;
			break;
		case 'f':
			f = va_arg(av, double);
			printf("%f", f);
			sep = 1;
			break;
		case 's':
			str = va_arg(av, char *);
			sep = 1;
			printf("%s", (str == NULL) ? "(nil)" : str);
			break;
		default:
			sep = 0;
		}
		if (format[i + 1] != '\0' && sep == 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(av);
}
