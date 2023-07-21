#include "main.h"

/**
 * _isupper - checksfor uppercase characters
 *@c: function parameter
 * Return: always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
