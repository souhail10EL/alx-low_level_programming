#include "lists.h"
/**
 * free_listint - freeinglinked list
 * @head: pointer to the head of node
 * Retrun: void
 */
void free_listint(listint_t *head)
{
	listint_t *khwansou;

	while (head)
	{
		khwansou = head;
		head = head->next;
		free(khwansou);
	}
}
