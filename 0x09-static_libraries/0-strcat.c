#include "main.h"

/**
 * _strcat -  appends the src string to the dest string, overwriting the termi
 * nating null byte (\0) at the end of dest, and then adds a terminating null
 * byte. Returns a pointer to the resulting string dest
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
