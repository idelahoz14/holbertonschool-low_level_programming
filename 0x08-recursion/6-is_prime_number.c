#include "holberton.h"
/**
 * test - check the number.
 * @num: number
 * @count: base number
 * Return: if is prime 1 else 0.
 */
int test(int num, int count)
{
	if (num <= 1 || num % count == 0)
		return (0);
	if (count * count > num)
		return (1);
	return (test(num, count + 1));
}
/**
 * is_prime_number - check if a number is prime.
 * @n: number
 * Return: if is prime 1 else 0.
 */
int is_prime_number(int n)
{
	int test = 2;

	return (test(n, test));
}
