#include "main.h"
/**
 * binary_to_uint - Func. converting binary no. to unsigned int
 * @b: Pointer to string 0 or 1 characters
 * Return: output converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}


