#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releasing memory allocated for a list
 * @head: a pointer to the first node of the list
 */
void free_list(list_list *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
