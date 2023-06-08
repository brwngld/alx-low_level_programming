#include "main.h"

/**
 * is_prime_number - Checks if the input number is a prime number or not
 * @n: Number to checked.
 * Return: 1 if number is prime and 0 if not.
*/

int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	{
		return (0);
	}

	for (a = 2; a * a <= n; a++)
	{
		if (n % a == 0)
		{
			return (0);
		}
	}

	return (1);
}
