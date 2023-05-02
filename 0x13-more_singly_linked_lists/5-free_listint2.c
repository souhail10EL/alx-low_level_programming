#include "lists.h"
/**
 * free_listint2 - freeing list with empty list
 * @head: double pointer to the head
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *cur_node = *head;
	listint_t *nx_node;

	if (*head == NULL || head == NULL)
		return;

	while (cur_node != NULL)
	{
		nx_node = cur_node->next;
		free(cur_node);
		cur_node = nx_node;
	}
	*head = NULL;
}
