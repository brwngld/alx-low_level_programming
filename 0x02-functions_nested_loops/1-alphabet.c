#include "main.h"

/**
 * print_alphabet - pprint all alphabeth in lowercase
 * written by brwngld
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
