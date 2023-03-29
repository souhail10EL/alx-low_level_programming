#include "main.h"
/**
 * swap_int - function that swaps to integers values
 * @a: parameter pointer
 * @b: parameter pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
