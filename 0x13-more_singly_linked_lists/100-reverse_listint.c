#include "lists.h"
/**
 * reverse_listint - reversed linked list
 * @head: double pointer
 * Return: list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rakhou = *head;
	listint_t *qber = NULL;

	while (rakhou != NULL)
	{
		listint_t *nxt = rakhou->next;

		rakhou->next = qber;
		qber = rakhou;
		rakhou = nxt;
	}
	*head = qber;
	return (*head);
}
