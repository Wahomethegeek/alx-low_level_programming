#include "lists.h"

/**
 * get_nodeint_at_index - returning the node at a certain linked list
 * @head: This is node number one of the list
 * @index: The data the node returns
 * Return: pointing to the node in return
 */
listint_t get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *temp = head;

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}

	return (temp != NULL ? temp : NULL);
}
