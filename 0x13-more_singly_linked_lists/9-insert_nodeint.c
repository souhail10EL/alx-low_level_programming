#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node
 * @head: double pointer to the head of node
 * @idx: index of the list
 * @n: data to store
 * Return: address of new node or null if its empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t nnode;
	listint_t *tem = *head;
	unsigned int q;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	for (q = 0; q < idx - 1 && tem; q++)
	{
		tem = tem->next;
		if (tem == NULL)
		{
			free(nnode);
			return (NULL);
		}
	}

	nnode->next = tem->next;
	tem->next = nnode;

	return (nnode);
}
