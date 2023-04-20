#include "function_pointers.h"
/**
 * int_index - function ok
 * @array: array pointer
 * @size: size of array
 * @cmp: function pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q = 0;

	if (array && size && cmp)
		while (q < size)
		{
			if (cmp(array[q]))
				return (q);
			q++;
		}
	return (-1);
}
