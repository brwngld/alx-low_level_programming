#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
*/

int main(void)
{
	unsigned long bona1 = 0, bona2 = 1, banasum;
	float tot_sum;

	while (1)
	{
		bonasum = bona1 + bona2;
		if (bonasum > 4000000)
			break;

		if ((bonasum % 2) == 0)
			tot_sum += bonasum;

		bona1 = bona2;
		bona2 = bonasum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
