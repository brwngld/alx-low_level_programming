#include "main.h"

/**
 * _puts_recursion - Prints out strings with new line.
 * @s: String to be printed out.
 * Return: 0 Always.
*/

void _puts_recursion(char *s)
{
	if (*s == '0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
