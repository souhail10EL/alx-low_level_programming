#include "lists.h"
/**
 * _q - reallocate memory
 * @list: double pointer
 * @size: of the list
 * @new: new node
 * Return: pointer to the list
 */
const listint_t **_q(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nlist;
	size_t w;

	nlist = malloc(size * sizeof(listint_t *));
	if (nlist == NULL)
	{
		free(nlist);
		exit(98);
	}
	for (w = 0; w < size - 1; w++)
		nlist[w] = list[w];
	nlist[w] = new;
	free(list);
	return (nlist);
}
/**
 * print_listint_safe - prints linstint_t linked list
 * @head: pointer to the head of nodes
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	size_t hseb = 0;
	size_t w;

	while (head != NULL)
	{
		for (w = 0; w < hseb; w++)
		{
			if (head == list[w])
			{
				printf("[%p] %d\n", (void *)head, head->n);
				free(list);
				return (hseb);
			}
		}
		hseb++;
		list = _q(list, hseb, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (hseb);
}
