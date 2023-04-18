#include "main.h"

/**
 * check - Function that checks to see if the number
 * is a prime number
 * @x: int to be checked
 * @y: int to be checked
 * Return: int
*/

int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
  * is_prime_number - It returns a prime number
  * @n: Integer
  * Return: Int
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
