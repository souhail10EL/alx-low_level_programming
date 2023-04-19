#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: pointer to name
 * @f: function pointer
 * Return : name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
