#include "lists.h"
/**
 * add_node - adding new node to the list
 * @head: pointer that pointes to pointer head
 * @str: strin pointer
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode = (list_t *)malloc(sizeof(list_t));

	if (nnode == NULL || str == NULL)
	{
		return (NULL);
	}
	nnode->str = strdup(str);
	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->len = strlen(str);
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
