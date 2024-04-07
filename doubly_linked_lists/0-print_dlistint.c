#include "lists.h"

/**
 * print_dlistint - prints all the elements of linked list
 * @h: head
 * Return: sum of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
