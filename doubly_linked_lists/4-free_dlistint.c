#include "lists.h"

/**
 * free_dlistint - frees linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
