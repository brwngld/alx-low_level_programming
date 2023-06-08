#include "main.h"

/**
 * check - Checks if number is a prime number or not
 * @a: Number
 * @b: Divisor
 * Return: Check
 */

int check(int a, int b)
{
	if (b == 1)
	{
		return (0);
	}

	if (a % b == 0)
	{
		return (1);
	}

	return (check(a, b - 1));
}

/**
 * is_prime_number - States if number is prime or not
 * @n: Nubmer
 * Return: 1 if prime and 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!check(n, n - 1));
}
