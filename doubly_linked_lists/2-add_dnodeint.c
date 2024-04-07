#include "lists.h"

/**
 * add_dnodeint - add a new node to the list
 * @head: head pointer
 * @n: data of node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp)
	{
		temp->n = n;
		if (!*head)
		{
			temp->prev = NULL;
			temp->next = NULL;
		}
		else
		{
			temp->prev = NULL;
			temp->next = *head;
			(*head)->prev = temp;
		}
		*head = temp;
		return (*head);
	}
	return (NULL);
}
