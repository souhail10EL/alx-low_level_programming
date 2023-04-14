#include "main.h"
/**
 * _realloc - function that reallocates
 * @ptr: pointer
 * @old_size: value of bytes to allocate in mem
 * @new_size: new size to be allocates
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		memcpy(p, ptr, old_size);
		free(ptr);
	}
	return (p);
}
