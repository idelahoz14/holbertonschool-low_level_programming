#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct p - checker struct
 * @p: possibility
 * @f: Function to be used
 */
typedef struct struc
{
	char *p;
	void (*f)(va_list);
} stru;

#endif
