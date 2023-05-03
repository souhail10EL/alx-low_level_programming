#include "lists.h"
/**
 * free_listint_safe - freeing listint_t
 * @head: double pointer to the head of node
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t s = 0;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			s++;
			break;
		}

		tmp = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = tmp;
		s++;
	}
	*h = NULL;
	return (s);
}
