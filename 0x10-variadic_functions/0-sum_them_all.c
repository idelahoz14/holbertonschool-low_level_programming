#include "variadic_functions.h"
/**
 * sum_them_all - function that summ parameters
 * @n: number of arguments
 * Return: 0 if fail, sum if succeed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}

	va_end(va);
	return (sum);
}
