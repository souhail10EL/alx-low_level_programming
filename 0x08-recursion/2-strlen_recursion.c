#include "main.h"
/**
 * _strlen_recursion - function prints length of string
 * @s: parameter pointer
 * Return: 0 if its null otherwise 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	return (1 + _strlen_recursion(s + 1));
}
