#include "main.h"
/**
 * _strncat - function to concatenates strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destle = 0;
	int srcle = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destle++;
	for (i = 0; src[i] != '\0'; i++)
		srcle++;
	for (i = 0; i < n; i++)
		dest[destle + i] = src[i];
	return (dest);
}
