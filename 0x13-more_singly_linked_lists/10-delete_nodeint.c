#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted (starting from 0)
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rakhou, *qber;
	unsigned int q;

	if (*head == NULL)
	return (-1);

	rakhou = *head;
	if (index == 0)
	{
	*head = (*head)->next;
	free(rakhou);
	return (1);
	}

	prev = NULL;
	for (q = 0; q < index && rakhou != NULL; q++)
	{
	qber = rakhou;
	rakhou = rakhou->next;
	}

	if (rakhou == NULL)
	return (-1);

	qber->next = rakhou->next;
	free(rakhou);
	return (1);
}

