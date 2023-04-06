#include "main.h"
/**
 * _pow_recursion - function calculates the power of given num
 * @x: base
 * @y: exponent
 * Return: -1 if y is less 0 otherwise return the pow of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
