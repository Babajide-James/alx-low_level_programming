#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list arg;

	va_start(arg, n);

	while(i < n)
	{
		sum = sum + va_arg(arg, int);
		i++;
	}
	return (0);
}
