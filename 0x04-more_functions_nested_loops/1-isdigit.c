#include "main.h"
/**
 * _isdigit - checks if c is digits
 * @c: parameter
 * Return: 0 if c is not digit and 1 if it is
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
