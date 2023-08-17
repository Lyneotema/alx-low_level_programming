#include "function_pointers.h"
/**
 * print_name - Function that prints name
 * @name: String of name to be printed
 * @f: pointer to function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
