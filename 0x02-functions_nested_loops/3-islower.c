#include "main.h"
/**
 * _islower - function to print lowercase
 * @c: parametre to be printed
 *
 * Return: 1 if it is a lowercase otherwise
 * return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
