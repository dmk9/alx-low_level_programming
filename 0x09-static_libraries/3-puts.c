#include "main.h"

/**
 * _puts - prints a string in stdout
 * @t: string to be printed
 *
 * Return: void
 */
void _puts(char *t)
{
	int i = 0;

	while (*(t + i))
	{
		_putchar(*(t + i));
		i++;
	}

	_putchar('\n');
}
