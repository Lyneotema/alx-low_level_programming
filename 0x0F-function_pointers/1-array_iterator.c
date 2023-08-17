#include "function_pointers.h"
/**
 * array_iterator - Function that iterates through an array
 * @array: Array targeted
 * @size: Size of array
 * @action: Function pointer of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
