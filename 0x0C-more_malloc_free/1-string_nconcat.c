#include "main.h"
/**
 * string_nconcat - function concatenates two strings
 * @s1: pointer char
 * @s2: pointer char2
 * @n: value to take bytes from
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q, w, s1len, s2len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;
	p = malloc(s1len + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (q = 0; s1[q] != '\0'; q++)
		p[q] = s1[q];
	for (w = 0; w < n; w++)
	{
		p[q] = s2[w];
		q++;
	}
	p[q] = '\0';
	return (p);
}
