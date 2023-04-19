#include "function_pointer.h"

/**
 * int_index - A function that searches for an integer
 * @array: Array
 * @size: size
 * @cmp:
 *
 * Return: 0 Always
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
