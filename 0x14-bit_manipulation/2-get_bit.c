#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: Bit cheecke
 * @index: Index
 *
 * Return: The value of the bit at index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divi;
	unsigned long int rest;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divi = 1 << index;
	rest = n & divi;

	if (rest == divi)
		return (1);

	return (0);
}
