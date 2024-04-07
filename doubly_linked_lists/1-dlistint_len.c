#include "lists.h"

/**
 * dlistint_len - prints all the elements of linked list
 * @h: head
 * Return: sum of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
