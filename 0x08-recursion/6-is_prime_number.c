#include "main.h"
/**
 * is_prime_number -> function checks for prime num rec
 * @n: parameter
 * Return: 1 if its prime otherwise 0
 * @div: parameter
 */
int is_prime_number_hlp(int n, int div);
int is_prime_number(int n)
{
	return (is_prime_number_hlp(n, 2));
}
/**
 * is_prime_number_hlp -> recurtion function takes 2 parameter
 * @n: parameter
 * @div: parameter
 * Return: 0 if its not prime n otherwise 1
 */
int is_prime_number_hlp(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (div == 1 || div == n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_prime_number_hlp(n, div + 1));
}
