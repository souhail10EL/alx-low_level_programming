#include "main.h"
/**
 * _strspn - function to get length of a prefix substring
 * @s: pointer
 * @accept: parameter
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q, w;

	for (q = 0; s[q] != '\0'; q++)
	{
		for (w = 0; accept[w] != '\0'; w++)
		{
			if (s[q] == accept[w])
			{
				break;
			}
		}
	if (accept[w] == '\0')
	{
		return (q);
	}
	}
	return (q);
}
