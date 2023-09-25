#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: listint_t the list we will make free
*/

void free_listint(listint_t *head)
{
	listint_t *tempp;

	while (head)
	{
		tempp = head->next;
		free(head);
		head = tempp;
	}
}
