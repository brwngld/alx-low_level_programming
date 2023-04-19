#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coints to make change
 * for an an amount of money
 * @argc: argument count
 * @argv: Arguments
 *
 * Return: 0
*/

init main(int argc, char **argv)
{
	int total, count;
	unsigned int a;
	char *b;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &b, 10);
	coutn = 0;

	if (!*b)
	{
		while (total > 1)
		{
			for (a = 0; a < sizeof(cents[a]); a++)
			{
				if (total >= cents[a])
				{
					count += total / cents[a];
					total = total % cents[a];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
