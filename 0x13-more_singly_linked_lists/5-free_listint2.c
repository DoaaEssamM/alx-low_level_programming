#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head: the listint_t list we will free
*/

void free_listint2(listint_t **head)
{
	listint_t *tempp;

	if (head == NULL)
		return;

	while (*head)
	{
		tempp = (*head)->next;
		free(*head);
		*head = tempp;
	}

	*head = NULL;
}
