#include "lists.h"

/**
 * free_listint - freeing a listint_t in a list
 * @head: listint_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *count;

	while (head)
	{
		count = head->next;
		free(head);
		head = count;
	}
}
