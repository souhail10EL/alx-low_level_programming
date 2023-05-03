#include "lists.h"
/**
 * print_listint_safe - prints linstint_t linked list
 * @head: pointer to the head of nodes
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *rakh, *qber, *te;
	size_t hseb = 0;

	if (head == NULL)
		exit(98);

	rakh = head;
	qber = NULL;

	while (rakh != NULL)
	{
		pritnf("[%p] %d\n", (void *) rakh, rakh->n);
		hseb++;
		te = rakh;
		rakh = rakh->next;

		if (te < rakh && te > qber)
		{
			printf("-> [%p] %d\n", (void *) rakh, rakh->n);
			hseb++;
			break;
		}
		qber = te;
	}
	return (hseb);
}
