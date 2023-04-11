#include "main.h"
/**
 * _strdup - function that returns pointer to newle all mem
 * @str: pointer char
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *q;
	int n = 0;
	int w = 0;

	if (str == NULL)
		return (NULL);
	for (; str[w] != '\0'; w++)
	;
	q = malloc(w * sizeof(*str) + 1);
	if (q == 0)
		return (NULL);

	else
	{
		for (; n < w; n++)
			q[n] = str[n];
	}
	return (q);
}
