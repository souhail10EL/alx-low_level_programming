#include "lists.h"
/**
 * print_listint_safe - prints linstint_t linked list
 * @head: pointer to the head of nodes
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *rakh;
	const listint_t *te;
	size_t hseb = 0;

	if (head == NULL)
		return (0);

	rakh = head;
	while (rakh != NULL)
	{
		printf("[%p] %d\n", (void *) rakh, rakh->n);
		hseb++;
		if (rakh > rakh->next)
			rakh = rakh->next;
		else
		{
			printf("-> [%p] %d\n", (void *) rakh->next, rakh->next->n);
			break;
		}
	}
	if (rakh == NULL)
		return (hseb);
	te = head;
	while (te != rakh)
	{
		printf("[%p] %d\n", (void *)te, te->n);
		hseb++;
		te = te->next;
	}
	printf("-> [%p] %d\n", (void *) te->next, te->next->n);

	return (hseb);
}
