#include "lists.h"

/**
 * add_node - adds a node at the beginning of list
 * @head: points to the head of list
 * @str: what goes in the new node
 * Return: address of new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;

	if (!head || !str)
		return (NULL);

	newHead = malloc(sizeof(list_t));
	if (!newHead)
		return (NULL);

	newHead->str = strdup(str);
	if (!newHead->str)
	{
		free(newHead);
		return (NULL);
	}

	newHead->len = _strlen(newHead->str);
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
