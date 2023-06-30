#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - A function that finds the lenght of a string
 * @str: The string to find the lenght of
 *
 * Return: Length of string
*/

unsigned int _strlen(char *str)
{
	unsigned int a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * add_node_end - A function that adds a new node to the end
 * of list_t list.
 * @str: The string to add to the new node
 * @head: Double pointer to the linked list
 *
 * Return: New node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

		return (new);
	}
	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
