#include "lists.h"

/**
 * free_listint2 - Lets free a linked list
 * @head: pointer to listint_t, linked being freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *count

	if (head == NULL)
	return;

	while (*head)
	{
		count = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
