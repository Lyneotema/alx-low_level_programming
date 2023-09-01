#include "main.h"
/**
 * clear_bit - Set value of a certain bit to 0
 * @n: Address to the no. to change
 * @index: Index of bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}




















