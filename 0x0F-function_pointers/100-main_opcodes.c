#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: Address of the main function
 * @n: Number of bytes to print
 *
 * Return: void
*/

void print_opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%.2hhx", a[b]);
		if (b < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main fuction
 * @argc: Number of Arguments passed
 * @argv: Array of Pointers to Arguments
 * Return: 0 Always
*/

int main(int argc, char **argv)
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	c = atoi(argv[1]);
	
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, c);
	return (0);
}

