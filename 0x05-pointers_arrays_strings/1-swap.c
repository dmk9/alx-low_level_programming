#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
