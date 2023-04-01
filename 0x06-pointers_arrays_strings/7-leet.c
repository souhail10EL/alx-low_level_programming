#include "main.h"
/**
 * *leet - function to change letters
 * @p: parameter
 * Return: p
 */
char *leet(char *p)
{
	int i;
	int q;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (q = 0; q < 10; q++)
		{
			if (p[i] == str1[q])
			{
				p[i] = str2[q];
			}
		}
	}
	return (p);
}
