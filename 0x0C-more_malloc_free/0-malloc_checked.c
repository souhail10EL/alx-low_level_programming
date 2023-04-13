#include "main.h"
/**
 * malloc_checked - function allocates memory
 * @b: value to be checked
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
