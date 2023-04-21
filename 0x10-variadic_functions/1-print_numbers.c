#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: pointer to a seperator
 * @n: numbers of args
 * @...: args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int q;
	va_list args;

	va_start(args, n);
	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && q < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
