#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	va_start(args, n);

	while(i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	return (sum);
}
