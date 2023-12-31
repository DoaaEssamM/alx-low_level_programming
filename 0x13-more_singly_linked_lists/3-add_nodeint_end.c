#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a linked list
 * @head: the first element in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tempp->next)
		tempp = tempp->next;

	tempp->next = new;

	return (new);
}
