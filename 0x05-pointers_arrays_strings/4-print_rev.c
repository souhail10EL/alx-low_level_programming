#include "main.h"
#include <string.h>
/**
 * print_rev - function to print reverse
 * @s: is a parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int ok = strlen(s);
	int i;

	for (i = ok - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
