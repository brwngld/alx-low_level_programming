#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_list - A fucntion that frees a list_t list
 *
 * @hhead: Pointer to the first node of the list_t to free
 *
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if(head->str)
			free(head->str);

		free(head);
	}
}
