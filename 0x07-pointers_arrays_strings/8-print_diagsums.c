#include "main.h"
/**
 * print_diagsums - function prints the sum of 2 integers
 * @a: is a pointer var
 * @size: is a parameter
 * Return: sum of 2 int
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int q;

	for (q = 0; q < size; q++)
	{
	sum1 += a[q * size + q];
	sum2 += a[q * size + (size - q - 1)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}

