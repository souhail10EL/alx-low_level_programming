#include "main.h"
/**
 * _memset - function to set bytes to value
 * @s: pointer
 * @b: value to be stored
 * @n: bytes to be set
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
	s[w] = b;
	}
	return (s);
}
