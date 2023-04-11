#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size of malloc
 * @c: parameter char
 * Return: null if = 0 or it fail otherwise q
 */
char *create_array(unsigned int size, char c)
{
	char *q = malloc(size);

	if (q == 0 || size == 0)
		return (0);
	while (size--)
		q[size] = c;
	return(q);
}
