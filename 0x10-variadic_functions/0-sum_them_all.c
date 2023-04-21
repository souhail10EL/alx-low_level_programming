#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all arg
 * @n: const int type num
 * @...: args to sum
 * Return: the sum of ints
 */
int sum_them_all(const unsigned int n, ...)
{
	int su = 0;
	unsigned int q;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (q = 0; q < n; q++)
	{
		su += va_arg(args, int);
	}
	va_end(args);
	return (su);
}
