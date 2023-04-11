#include "main.h"
/**
 * _isalpha - Function to check alphabet
 * @c: parameter to be checked
 * Return: 1 if there is upper or lower cases alphabet
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
