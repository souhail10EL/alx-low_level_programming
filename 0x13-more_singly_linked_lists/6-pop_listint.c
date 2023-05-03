#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: double pointer to the head of the node
 * Return: node data or 0 if node is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tem;

	if (*head == NULL)
		return (0);

	tem = *head;
	*head = (*head)->next;
	n = tem->n;
	free(tem);
	return (n);
}
