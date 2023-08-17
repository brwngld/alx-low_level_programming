#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 * in a linked dlistint_t list
 * @h: The pointer to the beginning of a linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
