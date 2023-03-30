#include "main.h"
/**
 * puts2 - is a function to print every other char
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
