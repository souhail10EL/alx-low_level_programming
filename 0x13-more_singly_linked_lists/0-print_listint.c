#include "lists.h"
/**
 * print_listint - func prints the elements of linked list
 * @h: pointer to the node
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t hseb = 0;
	const listint_t *wanita = h;

	while (wanita != NULL)
	{
		printf("%d\n", wanita->n);
		wanita = wanita->next;
		hseb++;
	}
	return (hseb);
}
