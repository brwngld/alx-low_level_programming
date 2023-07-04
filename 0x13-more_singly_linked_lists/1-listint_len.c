#include "lists.h"

/**
 * listint_len - A function that returns all the elements in a
 * listin0t_t list
 * @h: The head pointer
 *
 * Return: The number of element
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
