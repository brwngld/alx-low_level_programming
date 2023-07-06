#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned long int res;
	unsigned int a;
	unsigned int b;

	a = 0;
	res = 1;
	diff = n ^ m;

	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (res == (diff & res))
			a++;
		res <<= 1;
	}

	return (a);
}
