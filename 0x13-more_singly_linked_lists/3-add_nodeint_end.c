#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the
 * end of a listint_t list.
 * @head: Head of double pointer
 * @n: Int add the list
 *
 * Return: The address of the new element or NULL if it
 * failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
