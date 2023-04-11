#include "main.h"
/**
 * _strlen - find len of str
 * @str: string
 * Return: z
 */
int _strlen(char *str)
{
	int siz = 0;

	for (; str[siz] != '\0'; siz++)
	;
	return (siz);
}

/**
 * *str_concat - function concates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	int size0, size1, q;
	char *qw;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size0 = _strlen(s1);
	size1 = _strlen(s2);
	qw = malloc((size0 + size1) * sizeof(char) + 1);
	if (qw == 0)
		return (0);
	for (q = 0; q <= size0 + size1; q++)
	{
		if (q < size0)
			qw[q] = s1[q];
	else
		qw[q] = s2[q - size0];
	}
	qw[q] = '\0';
	return (qw);
}


