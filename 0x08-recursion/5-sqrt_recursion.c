#include "main.h"

int sqrt_checker(int j, int k);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number ot take a square root of
 *
 * Return: square root of n or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_checker(1, n));
}

/**
 * sqrt_checker - actual checker for square root of k
 * @j: trials to get square root
 * @k: number n to get square root of
 *
 * Return: natural square root of k or -1
 */
int sqrt_checker(int j, int k)
{
	if (j * j == k)
		return (j);
	if (j * j > k)
		return (-1);
	return (sqrt_checker(j + 1, k));
}
