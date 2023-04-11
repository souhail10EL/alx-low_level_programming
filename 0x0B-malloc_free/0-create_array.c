#include "main.h"
char *create_array(unsigned int size, char c)
{
	char *q = malloc(size);

	if (q == 0 || size == 0)
		return (0);
	while (size--)
		q[size] = c;
	return(q);
}
