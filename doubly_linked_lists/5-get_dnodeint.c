#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: first node
 * @index: index of number
 * Return: number in the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp)
	{
		tmp = head;

		while (tmp != NULL)
		{
			if (idx == index)
				return (tmp);
			idx++, tmp = tmp->next; }
	}
	return (NULL);
}
