#incude "holberton.h"
/**
 *
 *
 *
 *
 */
int factorial(int n)
{
	int num;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		num = 1;
	}
	else
	{
		num = i * factorial(i - 1);
	}
	return (num);
}
