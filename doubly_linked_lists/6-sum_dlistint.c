#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list.
 * @head: first node
 * Return: number in the given index
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp || head != NULL)
	{
		tmp = head;

		while (tmp != NULL)
		{
			sum += tmp->n;
			tmp = tmp->next; }
		return (sum);
	}
	return (0);
}
