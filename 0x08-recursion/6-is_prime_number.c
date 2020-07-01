#include "holberton.h"
/**
 *is_prime_number - decides if integer is prime
 *@n: number to test
 *
 *Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int test = 2;

	return (test(n, test));
}
int test(int num, int base)
{
	if (num <= 1 || num % base == 0)
		return (0);
	if (base * base > num)
		return (1);
	return (check_num(num, base + 1));
}
