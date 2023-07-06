#include "main.h"

/**
 * _power - A function that calculates base and power
 * @pow: The power of the exponent
 * @base: The base of the exponent
 *
 * Return: The value of base and power
*/

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int i;
	unsigned int j;

	i = 1;

	for (j = 1; j <= pow; j++)
		i *= base;
	return (i);
}

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: Number
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int b;
	unsigned long int res;
	char flag;

	flag = 0;
	b = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (b != 0)
	{
		res = n & b;
		if (res == b)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || b == 1)
		{
			_putchar('0');
		}
		b >>= 1;
	}
}
