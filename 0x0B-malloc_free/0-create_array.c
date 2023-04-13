#include "main.h"

/**
 * *create_array - Function that creates an array of chars
 * ,and initializes it with a specific char.
 * @size: size of bytes
 * @c: char to be printed
 * Return: Always 0
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		Return(NULL);
	}
	char *arr = malloc(size * sizeof(char));
	{
		if (arr == NULL)
		{
			Return(NULL);
		}
		for (int i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		Return(arr;)
	}
}
