#include  "function_pointers.h"
/**
 * array_iterator - function okay
 * @array: array pointer
 * @size: size of array
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *qwe = array + size - 1;

	if (array && size && action)
		while (array <= qwe)
			action(*array++);
}
