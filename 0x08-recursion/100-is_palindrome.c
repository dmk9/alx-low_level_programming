#include "main.h"

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * palindrome_check - check to see if a string is a palindrome
 * @l: left side index
 * @r: right side index
 * @p: possible palindrome
 *
 * Return: 1 if true, 0 if not
 */
int palindrome_check(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (palindrome_check(l + 1, r - 1, p));
}

/**
 * is_palindrome - confirm if string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is, 0 if not.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (palindrome_check(0, i, s));
}
