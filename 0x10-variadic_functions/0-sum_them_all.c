#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: sum of all argument
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = result = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);

}
