#include "lists.h"
/**
 * free_list - freeing linked list
 * @head: pointer to the head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *khwanso;

	while (head != NULL)
	{
		khwanso = head;
		head = head->next;
		free(khwanso->str);
		free(khwanso);
	}
}
