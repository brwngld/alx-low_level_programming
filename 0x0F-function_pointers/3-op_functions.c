#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that does addition
 * @a: Integer
 * @b: Integer
 *
 * Return: Addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that does substraction
 * @a: Integer
 * @b: Integer
 *
 * Return: Substraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that does multiplication
 * @a: Integer
 * @b: Integer
 *
 * Return: Multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that does division
 * @a: Integer
 * @b: Integer
 *
 * Return: Division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that does Modulation
 * @a: Integer
 * @b: Integer
 *
 * Return: Modulation
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
