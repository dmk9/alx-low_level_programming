#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (x[j] == *(s + i))
				*(s + i) = y[j];
		}
	}
	return (s);
}
