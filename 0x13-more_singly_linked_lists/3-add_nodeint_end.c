#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end of a list
 * @head: pointing to the first node of the list
 * @n: data to the new node
 * Return: the address of the new value.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
