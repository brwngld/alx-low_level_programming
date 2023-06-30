#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: Character
 *
 * Return: i
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list
 * @head: Head of the list_t list.
 * @str:: The value that is inserted into element.
 *
 * Return: The number of nodes.
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
