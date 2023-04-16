#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a dynamically allocated copy of the input
 * string @str
 *
 * @str:  The input string to be copied
 * Return: A pointer to the new copy of the input string
*/

char *_strdup(char *str)
{
	size_t len;
	char *new_str;
	size_t i;

	len = strlen(str);
	new_str = malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
