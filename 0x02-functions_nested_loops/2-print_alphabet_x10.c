#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
*/

void print_alphabet_x10(void);
{
	int ten = 0;
	char alpha;
	
	while (ten++ <= 9)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	
	_putchar('\n');
	}
}
