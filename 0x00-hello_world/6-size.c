#include <stdio.h>

/**
 *main - print the size of various types
 *
 *Description: prints the size of various types on the computer
 *it is compiled
 *
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int is: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int is: %d byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int is: %d byte(s)\n",
		(int) sizeof(long long int));
	printf("Size of a float is: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
