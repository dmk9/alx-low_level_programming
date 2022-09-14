#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int total3, total5, total;
	int i;

	total3 = 0;
	total5 = 0;
	total = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
			total3 = total3 + i;
		else if ((i % 5) == 0)
			total5 = total5 + i;
	}
	total = total3 + total5;
	printf("%lu\n", total);
	return (0);
}
