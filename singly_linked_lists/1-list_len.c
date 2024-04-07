#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
