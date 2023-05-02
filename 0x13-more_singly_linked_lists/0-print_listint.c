#include "lists.h"
/**
 * print_listint - func prints the elements of linked list
 * @h: pointer to the node
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t hseb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		hseb++;
		h = h->next;
	}
	return (hseb);
}
