#include  "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Produces sum of all parameters
 * @n: Number of parameters to be passed to sum
 * @...:number of parameter to calculate sum of
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}


