#incude "holberton.h"
/**
 *factorial - returns the factorial of a given number.
 *@n: number
 *
 *Return: num
 */
int factorial(int n)
{
	int num;

	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		num = 1;
	}
	else
	{
		num = n * factorial(n - 1);
	}
	return (num);
}
