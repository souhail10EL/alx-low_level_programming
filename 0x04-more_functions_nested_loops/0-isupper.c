#include "main.h"
/**
 * main - a simple function
 * _isupper - fuction to ckeck for upperletter
 * @c: parameter to ckeck if it is upper
 * Return: 1 if it is upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 &&c <= 90)
		return (1);
	else
		return (0);
}
