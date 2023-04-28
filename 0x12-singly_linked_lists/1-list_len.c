#include "lists.h"
/**
 * list_len - prints number of elements of list
 * @h: pointer to the header of node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t rahsab = 0;

	while (h != NULL)
	{
		rahsab++;
		h = h->next;
	}
	return (rahsab);
}
