#include "main.h"
/**
 * array_range - function that creates an array of int
 * @min: ordered from
 * @max: values to max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int diff;
	int *arra;
	int q;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min + 1;
	arra = malloc(sizeof(int) * diff);
	if (arra == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < diff; q++)
	{
		arra[q] = min + q;
	}
	return (arra);
}
