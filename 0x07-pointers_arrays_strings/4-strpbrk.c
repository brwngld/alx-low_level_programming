#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: First occurrence in the string
 * @accept: Matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
