#include "main.h"
#include <stdio.h>
/**
 * array_range - Creates array of int
 * @min: The minimum value
 * @max: The maximum value
 * Return: pointer to memeory allocated
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}









