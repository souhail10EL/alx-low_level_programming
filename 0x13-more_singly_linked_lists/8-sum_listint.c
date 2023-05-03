#include "lists.h"
/**
 * sum_listint - return the sum of data
 * @head: pointer to head of node
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *rakhou = head;
	int q = 0;

	while (rakhou != NULL)
	{
		q += rakhou->n;
		rakhou = rakhou->next;
	}
	return (q);
}
