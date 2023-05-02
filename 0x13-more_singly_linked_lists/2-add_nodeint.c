#include "lists.h"
/**
 * add_nodeint - adding node with its int value
 * @head: pointer that points to a pointer head
 * @n: int value of node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adnode = malloc(sizeof(listint_t));

	if (adnode == NULL)
		return (NULL);

	adnode->n = n;
	adnode->next = *head;
	*head = adnode;

	return (adnode);
}
