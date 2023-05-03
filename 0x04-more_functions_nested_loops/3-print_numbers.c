#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;
	char d;

	for (i = 0; i < 10; i++)
	{
		d = i + '0';
		_putchar(d);
	}
	_putchar('\n');
}
