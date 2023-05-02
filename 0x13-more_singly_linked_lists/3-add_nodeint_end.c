#include "lists.h"
/**
 * add_nodeint_end - adding node at the end of list
 * @head: pointer tha points to pointer head
 * @n: value
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adnode = malloc(sizeof(listint_t));
	listint_t *tem = *head;

	if (adnode == NULL)
		return (NULL);
	adnode->n = n;
	adnode->next = adnode;

	if (*head == NULL)
		*head = adnode;
	else
	{
		tem = *head;
	while (tem->next != NULL)
		tem = tem->next;
	tem->next = adnode;
	}
	return (adnode);
}
