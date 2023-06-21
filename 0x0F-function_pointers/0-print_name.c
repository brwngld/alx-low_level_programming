#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: The name given
 * @f: Function of name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
