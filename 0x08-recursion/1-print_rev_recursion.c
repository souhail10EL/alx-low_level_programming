#include "main.h"
/**
 * _print_rev_recursion - function prints strings recursevly
 * @s: is  pointer parameter
 * Return: s
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
