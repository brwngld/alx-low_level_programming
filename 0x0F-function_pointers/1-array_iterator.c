#include "function_pointers.h"

/**
 * array_iterator - A function given as a parameter
 * on each element of an array.
 * @array: Arry to execute funct on
 * @size: is the size of the array
 * @action: Is a point to the function you need to use
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i:

		if (array && action)
		{
			i = 0;
			while (i < size)
			{
				action(array[i]);
				i++;
			}
		}
}
