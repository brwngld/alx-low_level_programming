#include "main.h"

/**
 * _strlen_recursion - Prints out the number of length of a string.
 * @s: String to find length of.
 * Return: void.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
