#include "lists.h"
/**
 * print_list - prints nodes of the list linked
 * @h: pointer that points to the header of node
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t rahsab = 0;
	const list_t *rakhou = h;

	while (rakhou != NULL)
	{
		if (rakhou->str != NULL)
			printf("[%u] %s\n", rakhou->len, rakhou->str);
		else
			printf("[0] (nil)\n");

		rahsab++;
		rakhou = rakhou->next;
	}
	return (rahsab);
}
