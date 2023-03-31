#include "main.h"
/**
 * *_strcat - function that concatenates
 * @dest: des
 * @src: source
 * Return: src string concenates in dest
 */
char *_strcat(char *dest, char *src)
{
	int destle = 0;
	int srcle = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destle++;
	for (i = 0; src[i] != '\0'; i++)
		srcle++;
	for (i = 0; i < srcle; i++)
		dest[destle + i] = src[i];
	return (dest);
}
