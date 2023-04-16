#include "main."
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a dynamically allocated copy of the input
 * string @str
 *
 * @str:  The input string to be copied
 * Return: Alwasys 0
*/

char *_strdup(char *str)
{
	size_t = strlen(str);
	char *new_str = malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (size_t i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
