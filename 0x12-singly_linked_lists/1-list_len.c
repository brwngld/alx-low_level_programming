#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linke list
 * @h: Pointer to the lis_t list
 *
 * Return: Number of elements in h
*/

size_t list_len(const list_h *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
