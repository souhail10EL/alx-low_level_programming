#include "lists.h"
/**
 * free_listint_safe - freeing listint_t
 * @h: double pointer to the head of node
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *rakh;
	size_t s = 0;

	if (h == NULL)
		return (0);

	rakh = *h;
	while (rakh != NULL)
	{
		s++;
		if (rakh < rakh->next)
		{
			tmp = rakh;
			rakh = rakh->next;
			free(tmp);
		}
		else
		{
			free(rakh);
			*h = NULL;
			break;
		}
	}
	return (s);
}
