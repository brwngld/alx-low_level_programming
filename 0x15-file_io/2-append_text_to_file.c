#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that finds the length of a string
 * @str: The pointer to the string
 *
 * Return: The length of the string
*/

size_t _strlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: It's the name of the file
 * @text_content: It's the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content != NULL)
		len = write(a, text_content, _strlen(text_content));

	close(a);

	if (len == -1)
		return (-1);
	return (1);
}
