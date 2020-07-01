#incude "holberton.h"
/**
 *factorial - returns the factorial of a given number.
 *@n: number
 *
 *Return: num
 */
int factorial(int n)
{
	int s;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		s = 1;
	}
	else
	{
		s = n * factorial(n - 1);
	}
	return (s);
}
