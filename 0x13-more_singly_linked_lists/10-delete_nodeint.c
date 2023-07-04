#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * index of a listint_t linked list.
 * @head: double pointer
 * @index: Index of node
 *
 * Return: Pointer to the index node
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (-+1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;

	for (a = 0; a < index - 1; a++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);

	return (1);
}
