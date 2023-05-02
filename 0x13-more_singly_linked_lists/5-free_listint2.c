#include "lists.h"
/**
 * free_listint2 - freeing list with empty list
 * @head: double pointer to the head
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *juan;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		juan = (*head)->next;
		free(*head);
		*head = juan;
	}
	*head = NULL;
}
