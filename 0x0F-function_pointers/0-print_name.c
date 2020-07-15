#include "function_pointers.h"
#include <stdilb.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointers
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
