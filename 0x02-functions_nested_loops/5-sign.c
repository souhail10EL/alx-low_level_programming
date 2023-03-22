#include "main.h"
/**
 * print_sign - function prints the sign
 * @n: parameter for sign
 * Return: 1 if positive 0 if is zero -1 negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
