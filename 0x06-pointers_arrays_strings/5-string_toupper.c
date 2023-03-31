#include "main.h"
/**
 * string_toupper - is a function to change lower cases to upper
 * @str: parameter pointer string
 * Retrun: upper case
 */
char *string_toupper(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
