#include "main.h"
/**
 * print_alphabet_x10 - 'print alphabet x10'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int g;
	int p;

	for (g = 1; g <= 10; g++)
	{
		for (p = 97; p <= 122; p++)
			_putchar(p);
		_putchar('\n');
	}
}
