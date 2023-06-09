#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: factorial number to be calculated.
 * Return: Always 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
