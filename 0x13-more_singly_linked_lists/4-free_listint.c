#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list.
 * @head: The head of the list
 *
 * Return: NULL if erro
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
