#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the first element
 *
 * Return: the data that was deleted,
 * or if the list is empty so 0
*/

int pop_listint(listint_t **head)
{
	listint_t *tempp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tempp = (*head)->next;
	free(*head);
	*head = tempp;

	return (number);
}
