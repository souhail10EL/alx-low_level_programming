#include  "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function okay
 * @array: array pointer
 * @size: size of array
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t q;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
