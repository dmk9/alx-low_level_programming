#include "main.h"

/**
 * check_if_prime - check for a prime number
 * @i: iterator to check factor
 * @j: possible primes
 *
 * Return: 1 if prime or 0 if not
 */
int check_if_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (check_if_prime(i + 1, j));
}

/**
 * is_prime_number - confirm a prime number
 * @n: number to check
 *
 * Return: 1 if prime number or 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_if_prime(2, n));
}
