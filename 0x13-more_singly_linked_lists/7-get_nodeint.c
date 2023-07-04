#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list.
 * @index: Index of the node
 * @head: A pointer of tehe first node
 *
 * Return: NULL if node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	for (a = 0; a < index; a++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
