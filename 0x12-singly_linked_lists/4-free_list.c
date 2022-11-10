#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees a list_t list.
 *
 * @head: The list to free.
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
