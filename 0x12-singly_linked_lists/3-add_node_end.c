#include "lists.h"
/**
 * add_node_end - adding node at the end of the list
 * @head: pointer to pointer that points to the head
 * @str: string filed
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode1, *rakhou;

	if (head == NULL || str == NULL)
		return (NULL);

	nnode1 = malloc(sizeof(list_t));
	if (nnode1 == NULL)
		return (NULL);

	nnode1->str = strdup(str);
	if (nnode1->str == NULL)
	{
		free(nnode1);
		return (NULL);
	}
	nnode1->len = strlen(str);
	nnode1->next = NULL;

	if (*head == NULL)
	{
		*head = nnode1;
	}
	else
	{
		rakhou = *head;
		while (rakhou->next != NULL)
			rakhou = rakhou->next;
		rakhou->next = nnode1;
	}
	return (nnode1);
}
