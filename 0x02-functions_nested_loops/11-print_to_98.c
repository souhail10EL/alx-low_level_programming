#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - whatever the n is
 * @n: parameter that has numbers
 * Return: 0
 */
void print_to_98(int n)
{
	int t;

	if ((n >= 0) && (n <= 98))
	{
		for (t = n; t <= 98; t++)
		{
			printf("%d, ", t);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (t = n; t <= 98; t++)
		{
			printf("%d, ", t);
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		for (t = n; t >= 98; t--)
		{
			printf("%d, ", t);
		}
		printf("\n");
	}
	else
	{
		n = 98;
		printf("%d, ", n);
	}
}
