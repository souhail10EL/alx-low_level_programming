#include "main.h"
/**
 * print_last_digit - function to check last digit
 * @q: parameter to print last digit
 * Return: always w
 */
int print_last_digit(int q)
{
	int w;

	w = q % 10;
	if (q < 0)
		w = -w;
	_putchar(w + '0');
	return (w);
}
