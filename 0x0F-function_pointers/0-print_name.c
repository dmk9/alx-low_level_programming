#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print which is a string
 * @f: function pointer to priinting function passed
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
