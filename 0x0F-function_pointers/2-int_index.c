#include "function_pointers.h"
/**
 * int_index - Searches for an int
 * @array: Array targeted
 * @size: Size of array
 * @cmp: Function pointer for comparing search int
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}


