#include "holberton.h"
/**
 * check_num - check the number.
 * @num: number
 * @base: base number
 * Return: if is prime 1 else 0.
 */
int check_num(int num, int base)
{
	if (num <= 1 || num % base == 0)
		return (0);
	if (base * base > num)
		return (1);
	return (check_num(num, base + 1));
}
/**
 * is_prime_number - check if a number is prime.
 * @n: number
 * Return: if is prime 1 else 0.
 */
int is_prime_number(int n)
{
	return (check_num(n, 2));
}
