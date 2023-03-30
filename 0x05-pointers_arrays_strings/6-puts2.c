#include "main.h"
/**
 * puts2 - is a function to print every other char
 * @str: is a parameter
 * Return: str
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
