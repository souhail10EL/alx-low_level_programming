#include "main.h"
/**
 * factorial - function calculates factorial of number
 * @n: number to be calculated
 * Return: results of n
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
