#include "main.h"

/**
 * check -  checks for the square root
 * @a: Integer
 * @b: Integer
 * Return: Check
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}


/**
 * _sqrt_recursion - Natural square root of a number
 * @n: Integer to find the square root of
 * Return: Natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
