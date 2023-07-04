#include "lists.h"

/**
 * sum_listint - It returns the sum of of the data(n) of a
 * listint_t linked list
 * @head: A pointer to the first node
 *
 * Return: 0 if list empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
