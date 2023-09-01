#include "main.h"
/**
 * get_bit - Returns value of a bit at an index in a decimal number
 * @n: No. to search
 * @index: Bit index to be gotten
 * Return: value of the bit or -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (f = 0; f < index; f++)
		n = n >> 1;
	return ((n & 1));
}

