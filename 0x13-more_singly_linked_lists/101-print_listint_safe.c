#include "lists.h"
/**
 * print_listint_safe - prints linstint_t linked list
 * @head: pointer to the head of nodes
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *rakh = head;
	const listint_t *te = NULL;
	size_t hseb = 0;

	while (rakh != NULL)
	{
		printf("[%p] %d\n", (void *) rakh, rakh->n);

		te = rakh;
		rakh = rakh->next;

		if (te <= rakh)
		{
			printf("-> [%p] %d\n", (void *) rakh, rakh->n);
			exit(98);
		}
	}
	return (hseb);
}
