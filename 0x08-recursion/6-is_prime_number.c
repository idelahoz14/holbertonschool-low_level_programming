#include "holberton.h"
/**
 *is_prime_number - decides if integer is prime
 *@n: number to test
 *
 *Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int counter = 2;

	if (n == 1 || n == -1)
	{
		return (0);
	}
	return (test(n, counter));
}

/**
 *primetest - checks if number is prime
 *@n: number to test
 *@counter: test variable
 *
 *Return: 1 if prime, 0 otherwise
 */
int test(int n, int counter)
{
	if (n == counter)
	{
		return (1);
	}
	if ((n % counter) != 0)
	{
		return (test(n, counter + 1));
	}
	else
	{
		return (0);
	}
}
