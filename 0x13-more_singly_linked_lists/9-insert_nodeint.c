#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a new
 * node at a given position.
 * @head: Double pointer
 * @idx: The index of teh list
 * @n: New node value
 *
 * Return: The address of teh new node or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;

		for (a = 0; a < idx - 1 && temp != NULL; a++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
