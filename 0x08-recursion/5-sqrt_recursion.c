#include "main.h"
/**
 * _sqrt_recursion -> function for square recurtion
 * @n: parameter value of square
 * @w: parameter
 * Return: -1 if num is not natral or n
 */
int _sqrt(int n, int w);
int _sqrt_recursion(int n)
{
		return (_sqrt(n, 1));
}


/**
 * _sqrt -> _sqrt function helper
 * @n: parameter value of square
 * @w: parameter
 * Return: -1 if num is not natral or n
 */
int _sqrt(int n, int w)
{
	int sq = w * w;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (w);
	return (_sqrt(n, w + 1));
}
