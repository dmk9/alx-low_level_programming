#include "main.h"

/**
 * _strncat - _strncat function is similar to the _strcat function
 * except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes.
 * Return a pointer to the resulting string dest
 * @dest: string to appended by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: address to dest (pointer)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
