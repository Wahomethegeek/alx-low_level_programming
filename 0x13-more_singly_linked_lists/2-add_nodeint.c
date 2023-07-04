#include "lists.h"

/**
 * add_nodeint - Inserting a node at the beginning of a list
 * @head: The first node of the list
 * @n: Data of the nodes
 * Return: address of the new element of NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = new;

	return (temp);
}

