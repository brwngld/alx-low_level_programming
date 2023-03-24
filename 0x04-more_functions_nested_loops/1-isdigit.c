#include "main.h"

/**
 * _isdigit - Check for a digit from 0 through 9
 * written by brwngld
 *@c: digit to be checked
 * Return: 1 if c is a digit and 0 if c is not a digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
