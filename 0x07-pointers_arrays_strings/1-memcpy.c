#include "main.h"
/**
 * _memcpy - function that copies bytes
 * @dest: destination
 * @src: source to be copied
 * @n: size of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pointer = dest;

	while (n-- > 0)
	{
		*pointer++ = *src++;
	}
		return (dest);
}
