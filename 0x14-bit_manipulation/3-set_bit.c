#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1
 * @n: Pointer to the number to manipulate
 * @index: Index of the bit to manipulate
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}

