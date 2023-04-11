#include "main.h"
/**
 * _strchr - function that locate first occurrence of char
 * @s: pointer
 * @c: to take the occur char from
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return ('\0');
}
