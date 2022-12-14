#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list.
 *@h: pointer to the list.
 *Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
		size_t cont = 0;

		while (h != NULL)
		{
			if (h->str == NULL)

				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cont += 1;
		}
		return (cont);
}
