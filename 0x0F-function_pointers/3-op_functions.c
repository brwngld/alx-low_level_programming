#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - A function that does addition.
 * @a: Integer
 * @b: Integer
 * Return: Addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that does substraction.
 * @a: Integer
 * @b: Integer
 * Return: Substraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that does multiplication
 * @a: Integer
 * @b: Integer
 * Return: Multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that does division
 * @a: Integer
 * @b: Integer
 * Return: Division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - A function that returns a division remainder
 * @a: Integer
 * @b: Integer
 * Return: Remainder
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
