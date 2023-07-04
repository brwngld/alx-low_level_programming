#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: Name of the list
 *
 * Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count++;

		h = h->next;
	}

	return (count);
}