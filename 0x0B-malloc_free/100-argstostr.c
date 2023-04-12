#include "main.h"
/**
 * argstostr - function to concatenate args to str
 * @ac: int parameter
 * @av: str parameter
 * Return: pointer s
 */
char *argstostr(int ac, char **av)
{
	int q, w, r;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (w = 0; w < av[q][w]; w++)
			len++;
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	r = 0;

	for (q = 0; q < ac; q++)
	{
		for (w = 0; av[q][w] != '\0'; w++)
		{
			s[r] = av[q][w];
			r++;
		}
		s[r] = '\n';
		r++;
	}
	return (s);
}
