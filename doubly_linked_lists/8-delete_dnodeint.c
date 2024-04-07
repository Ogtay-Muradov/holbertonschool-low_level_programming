#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a  linked list.
 * @head: start point of list
 * @index: end point
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (idx = 0; tmp != NULL; idx++)
	{
		if (index == 0)
		{
			if (tmp->next)
				tmp->next->prev = NULL;
			*head = tmp->next;
			free(tmp);
			return (1); }

		else if (idx == index && tmp->next == NULL)
		{
			tmp->prev->next = tmp->next;
			free(tmp);
			return (1); }
		else if (idx == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1); }
		tmp = tmp->next;
	}
	return (-1);
}
