#include "lists.h"
/**
 * reverse_listint - reversed linked list
 * @head: double pointer
 * Return: list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *te;
	listint_t *qber = NULL;

	while (*head != NULL)
	{
		te = (*head)->next;
		(*head)->next = qber;
		qber = *head;
		*head = te;
	}
	*head = qber;
	return (*head);
}
