#include "lists.h"
/**
 * get_nodeint_at_index - return index of the node
 * @head: pointer to the head of node
 * @index: index of the node
 * Return: pointer to the num of ind or NULL if its empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *qw = head;
	unsigned int q = 0;

	while (qw != NULL && q < index)
	{
		qw = qw->next;
		q++;
	}
	return (q == index ? qw : NULL);
}
