#include "lists.h"
/**
 * listint_len - print num of elements
 * @h: pointer to the node
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t hseb = 0;

	while (h != NULL)
	{
		hseb++;
		h = h->next;
	}
	return (hseb);
}
