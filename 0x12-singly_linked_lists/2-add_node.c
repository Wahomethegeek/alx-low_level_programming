#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the lenght of a string
 * @s: character
 * Return: return value
 */
int _strlen(const char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * add_node - add a new node
 * @head: head of a list_t
 * @str: value of the insert element
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
